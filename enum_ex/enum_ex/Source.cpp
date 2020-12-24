#include <iostream>

using namespace std;

enum direction { East, West, North, South };

int main()

{

	direction dir;

	dir = South;



	//Example 1

	//Equality operator



	if (dir == 3)

	{

		cout << "Your direction is south";

	}



	dir = North;



	//Example 2

	//Greater than operator

	cout << "\n";

	if (dir > 0)

	{

		cout << "Your direction is not East";

	}



	return 0;

}