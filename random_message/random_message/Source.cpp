#include<iostream>
#include<algorithm> 
#include<array>
using namespace std;
void messageByValue(int a)
{
	switch (a) {
	case 1:
		cout<<" \"Sorry.You're not close enough!\" - returned 20% of the time";
		break;
	case 2:
		cout << " \"Oh, you're almost there?\" - returned 40% of the time";
		break; 
	case 3:
		cout << "\"Aw cmon, you can do better than that!\" - returned 25 % of the time";
		break;
	case 4:
		cout << "\"You're up big. Getting closer to breaking your old record\" - returned 15% of the time";
		break;

	 // you can have any number of case statements.
	default: //Optional
		cout << "Error !!";
	}
}

void messageByReference(int &a)
{
	switch (a) {
	case 1:
		cout << " \"Sorry.You're not close enough!\" - returned 20% of the time";
		break;
	case 2:
		cout << " \"Oh, you're almost there?\" - returned 40% of the time";
		break;
	case 3:
		cout << "\"Aw cmon, you can do better than that!\" - returned 25 % of the time";
		break;
	case 4:
		cout << "\"You're up big. Getting closer to breaking your old record\" - returned 15% of the time";
		break;

		// you can have any number of case statements.
	default: //Optional
		cout << "Error !!";
	}
}
int main()
{
	int random_no;
	std::array<int, 4> foo{ 1,2,3,4 };
	int choice;
	do
	{
		cout << "Enter the choice :\n";
		cout << "1 -messageByValue \n2-messageByReference\n-1-Exit\n";
		cin >> choice;
		if (choice == 1)
		{
			random_shuffle(foo.begin(), foo.end());
			random_no = foo[0];
			cout << random_no;
			messageByValue(random_no);
		}
		else if(choice == 2)
		{
			random_shuffle(foo.begin(), foo.end());
			random_no = foo[0];
			cout << random_no;
			messageByReference(random_no);
		}
		else if(choice == -1)
		{
			cout << " Thank you for using. Exiting!.";
			return 0;
		}

	} while (choice != -1);
	return 0;


}
