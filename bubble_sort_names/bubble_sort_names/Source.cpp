// C++ program for implementation of Bubble sort 
#include <iostream> 
using namespace std;

void swap(string *a, string *b)
{
	string temp = *a;
	*a = *b;
	*b = temp;
}

// A function to implement bubble sort 
void bubbleSort(string arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place 
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(string arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code 
int main()
{
	string arr[] = { "Muhammad Sudais","hassam haider","Usman abdul majeed","Usman siddique pir zada" };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
