#include<iostream>

using namespace std;

//Base class 
class Employee
{
public:
	string emp_name;
	

	Employee(string n)
	{
		emp_name = n;
	}

};

// Sub class inheriting from Base Class(Employee) 
class HourlyEmployee : public Employee
{
public:
	double working_hours;
	
	// Constructor
	HourlyEmployee(string n, double wh) : Employee(n)
	{
		working_hours = wh;
	}

	//Member function for calculating the total income of an employee
	void income()
	{
		float total_income = working_hours * 360;
		cout << "Total income is " << total_income;
	}
};

// Sub class inheriting from Base Class(Employee) 
class PermanentEmployee : public Employee
{
public:
	int no_of_working_days;

	// Constructor
	PermanentEmployee(string n, int wd) : Employee(n)
	{
		no_of_working_days = wd;
	}

	//Member function for calculating the total income of an employee
	void income()
	{
		const int pf = 18;
		float total_income = no_of_working_days * 400 - pf;
		cout << "Total income is " << total_income;
	}
};

int main()
{
	HourlyEmployee obj1("Peter", 10);
	obj1.income();
	cout << "\n";
	PermanentEmployee obj2("Sam", 30);
	obj2.income();


}