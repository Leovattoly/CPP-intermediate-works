#include <iostream>

using namespace std;

class Person
{
	// Access specifier 
public:

	// Data Members 
	string name;
	int year_of_birth;

	// Constructors
	Person(string n, int yob)
	{
		name = n;
		year_of_birth = yob;
	}
	// Member Functions() 
};

class Student : public Person
{
	// Access specifier 
public:

	// Data Members 
	int studentID;
	int enrolledSemester;

	// Constructors
	Student(string n, int yob, int sid, int esem) : Person(n,yob)
	{
		//name = n;
		//year_of_birth = yob;
		studentID = sid;
		enrolledSemester = esem;
		
	}
	// Member Functions() 
	void display()
	{
		//cout << "Name : "<< name << endl;
		cout << "Year of Birth : " << year_of_birth;
		cout << "Student ID : " << studentID;
		cout << "Enrolled Semester : " << enrolledSemester;


	}
};


class Employee
{
	// Access specifier 
public:

	// Data Members 
	string jobTitle;
	int employeeID;
	int joiningYear;
	int courseID;
	string courseTitle;

};

class Administration : public Employee
{
	// Access specifier 
public:

	// Constructors
	Administration(string jt,int empid, int jy, int cid, string ct)
	{
		jobTitle = jt;
		employeeID = empid;
		joiningYear = jy;
		courseID = cid;
		courseTitle = ct;
	}
	// Member Functions() 
	void setJobTitle( Employee employee)
	{
		jobTitle = employee.jobTitle;
	}
	string getJobTitle(Employee employee)
	{
		return (employee.jobTitle);
	}
};

class Academic : public Employee
{
	// Access specifier 
public:

	// Constructors
	Academic(string jt , int empid , int jy , int cid, string ct)
	{
		jobTitle = jt;
		employeeID = empid;
		joiningYear = jy;
		courseID = cid;
		courseTitle = ct;
	}
	// Member Functions() 
	void setCourseID(int n)
	{
		
		courseID = n;

	}
	string setCourseTitle(string s)
	{
		courseTitle = s;
	}
};

int main() {

	// Declare an object of class geeks 
	Student obj1("Ana", 1996, 1245, 3);

	// accessing member function 
	obj1.display();
	return 0;
}