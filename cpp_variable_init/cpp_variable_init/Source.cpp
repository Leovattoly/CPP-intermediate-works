#include <iostream>
using namespace std;

int main()
{
	//Create an int A on thee stack and set it qual to 10
	// Stack is used for static memory allocation 

	int A = 10;

	// Create a float B on Heap and set the value to 3.14 
	// Heap for dynamic memory allocation.
	float *B = new float (3.14);

	// Create a reerence C that points to the value of B

	float *c = B;




}
