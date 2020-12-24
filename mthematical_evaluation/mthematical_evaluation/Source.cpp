#include <iostream>
#include <stdlib.h>
using namespace std;

// All the function eill produce a different questions in each iteration
// function for addition 
int add()
{
	int a = rand() % (100 - 2) + 1;
	int b = rand() % (100 - 2) + 1;
	int ans = 0;
	cout << a << "+" << b << "= ?";
	cin >> ans;
	if (ans == (a + b))
	{
		return 1;

	}
	else
	{
		return 0;
	}

}

// Function for substraction 
int sub()
{
	int a = rand() % (100 - 2) + 1;
	int b = rand() % (100 - 2) + 1;
	int ans = 0;
	cout << a << "-" << b << "= ?";
	cin >> ans;
	if (ans == (a - b))
	{
		return 1;

	}
	else
	{
		return 0;
	}

}

// Function for multiplication 


int mul()
{
	int a = rand() % (100 - 2) + 1;
	int b = rand() % (100 - 2) + 1;
	int ans = 0;
	cout << a << "*" << b << "= ?";
	cin >> ans;
	if (ans == (a * b))
	{
		return 1;

	}
	else
	{
		return 0;
	}

}
// Function for division 


int div()
{
	int a = rand() % (100 - 2) + 1;
	int b = rand() % (100 - 2) + 1;
	float ans = 0;
	cout << a << "/" << b << "= ?";
	cin >> ans;
	if (ans == (a / b))
	{
		return 1;

	}
	else
	{
		return 0;
	}

}
//displaying the menu
void menu() {
	cout << "Press 1 to calculate Sum of Numbers\n";
	cout << "Press 2 to calculate Difference of Numbers\n";
	cout << "Press 3 to calculate Product of numbers\n";
	cout << "Press 4 to calculate Division of numbers\n";
	cout << "Press 0 to Exit\n";
	}


int main() {
	
	int i;
	int p = 0;
	menu();
	cin >> i;
	if (i == 0)
	{
		return 0;
	}
	for (int j = 0; j < 3; ++j)
	{
		switch (i) {
		case 1: {
			p =p+ add();
			break;
		}
		case 2: {
			p = p + sub();
			break;
		}
		case 3: {
			p = p + mul();
			break;
		}
		case 4: {
			p = p + div();
			break;
		}
		case 5: {
			return 0;
			break;

		default:
			printf("Wrong Input\n");
		}
		}
	}
	cout << "\n Correctly answered :" << p;
	
	return 0;
}