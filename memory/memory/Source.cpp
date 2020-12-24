#include<string>
#include<iostream>

struct Node {

	int day = 0; //day

	int number = 0; //number to be stored for the day

	Node* next = nullptr; //next node in the linked list; remember the last node should point to nullptr

};

//a place

struct Place {

	char* region = nullptr; //region/country, in dynamic char array (C-string)

	char* province = nullptr; //province/state, in dynamic char array (C-string)

	Node* headNode = nullptr; //head of the linked list of dated numbers; set to nullptr if there is no node (yet)

};



void deallocateLinkedList(Node* headNode) {

	if (headNode == nullptr)

		return;

	deallocateLinkedList(headNode->next);

	delete headNode;

	headNode = nullptr;
}


void deallocatePlaces(Place* places, int placeCount) {

	for (int i = 0; i < placeCount; i++) {

		delete[]places[i].region;

		places[i].region = nullptr;

		deallocateLinkedList(places[i].headNode);

	}

	delete[]places;

	places = nullptr;

}



int mergeAllProvinces(Place*& places, int placeCount, const char* home) {

	int list_addition, list_copy;

	int i = 0; int count = placeCount;

	while (i < placeCount) {

		bool repeat_region = false;

		int repeat_index;

		for (int j = 0; j < i; j++) {

			if (strcmp(places[j].region, places[i].region) == 0) {

				repeat_region = true;

				repeat_index = j;

			}

		}

		if (repeat_region) {

			places[repeat_index].headNode =

				list_addition(places[repeat_index].headNode, places[i].headNode);


			for (int k = i; k < placeCount - 1; k++)

				places[k] = places[k + 1];

			placeCount--;

		}

		else {

			delete places[i].province;

			places[i].province = nullptr;

			i++;

		}

	}

	Place *merge = new Place[placeCount];

	for (int i = 0; i < placeCount; i++) {

		merge[i].region = places[i].region;

		merge[i].headNode = list_copy(places[i].headNode);

	}

	deallocatePlaces(places, count);

	places = new Place[placeCount];

	places = merge;

	return placeCount;

}


