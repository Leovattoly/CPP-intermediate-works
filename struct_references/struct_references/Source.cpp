#include <iostream>
#include <cstring>

using namespace std;

struct part {
	char  name[20];
	int id;
	float cost;
	int   num_available;
};

struct part load_data(char * name, int id, double cost, int num)

{
	struct part temp;
	if (sizeof(name) > 20)
	{
		temp.name[] = "\0";
	}
	else
	{
		temp.name[] = name;
	}
	
	temp.id = id;
	temp.cost = cost;
	temp.num_available = num;
	return temp;
}

int main() {
	
	struct part obj2;
	char n []= "Tutor" ;
	obj2 = load_data(n, 12, 350.6, 19);
	cout << "Name: " << obj2.name << "\n";
	cout << "Id: " << obj2.id;
	cout << "\n Cost: " << obj2.cost;
	cout << "\n Available No: " << obj2.num_available;
	return;

	
}