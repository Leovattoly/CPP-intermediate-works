#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include<fstream>
using namespace std;
struct employees {
	char name[15];
	float salary;
	int hours_of_work;
}emp[10];
int main()
{
	cout << "::Enter 10 Employees Details::\n ";
	for (int i = 0; i < 10; ++i)
	{
		cout << "Enter " << i + 1 << ". emp name:";
		cin >> emp[i].name;
		cout << "Enter " << i + 1 << ". emp salary:";
		cin >> emp[i].salary;
		cout << "Enter " << i + 1 << ". emp hours worked:";
		cin >> emp[i].hours_of_work;

	}
	for (int i = 0; i < 10; ++i)
	{
		if (emp[i].hours_of_work == 8)
			emp[i].salary += 55;
		else if(emp[i].hours_of_work == 10)
			emp[i].salary += 110;
		else if(emp[i].hours_of_work >=12)
			emp[i].salary += 140;
			   		 
	}
	ofstream fout;
	// open file for writing 
	fout.open("employee.txt", ios::out);
	for (int i = 0; i < 10; ++i)
	{
		// write struct to file 
		fout << emp[i].name << emp[i].salary <<emp[i].hours_of_work<<"\n";
	}
	// close file 
	fout.close();
	for (int i = 0; i < 10; ++i)
	{
		cout << "\nEmployee" << i + 1 << "===>" << emp[i].name << emp[i].salary << emp[i].hours_of_work<<"\n";
	}
}