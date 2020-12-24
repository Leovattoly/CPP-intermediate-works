#include <iostream> 
using namespace std;
class Person
{
	// Access specifier 
public:

	// Data Members 
	string name;
	int year_of_birth;

	// A two - argument constructor to initialize its data members with user - defined values

	Person(string n, int y)
	{
		name = n;
		year_of_birth = y;
	}
	
};

class Student : public Person
{
	// Access specifier 
public:

	// Data Members 
	int studentID;
	int enrolledSemester;

	// A four-argument constructor to initialize its data members (including inherited datamembers)

	Student(int sid,int es,string n, int y) : Person(n,y)
	{
		studentID = sid;
		enrolledSemester = es;
	}
	// A function named display() to show the values of all attributes (including inherited	attributes)

	void display()
	{
		cout << "Name: " << name;
		cout << "\nDOB: " << year_of_birth;
		cout << "\n Student ID: " << studentID;
		cout << "\nEnolled Semester: " << enrolledSemester;

	}
};

 // Class Employee 

class Employee : public Person
{
	// Access specifier 
public:

	// Data Members 
	int employeeID;
	int joiningYear;
	string jobTitle;
	int courseID;
	string courseTitle;
	Employee(int eid, int jy, string jt, int cid, string ct)
	{
		employeeID = eid;
		joiningYear = jy;
		jobTitle = jt;
		courseID = cid;
		courseTitle = ct;

	}
};

// Class Administration

class Administration : public Employee
{
	Administration(int eid, int jy, string jt, int cid, string ct) : Employee(eid,jy,jt,cid,ct)
	{
		
	}

	void setJobTitle(string jt)
	{
		jobTitle = jt;
	}

	void getJobTitle()
	{
		cout << "Job title: " << jobTitle;
	}
	
};

// Class Academic 

class Academic : public Employee
{

	// A parameterized constructor to receive five arguments to initialize inherited attributes

	// from class Employee(Concerning employeeID, joiningYear, and jobTitle, only null value

	// is allowed to set)
	Academic(int eid , int jy , string jt, int cid, string ct) : Employee(0, 0000, "\0", 0, "\0")
	{

	}

	void setCourseID(int cid)
	{
		courseID = cid;
	}
	void setCourseTitle(string ct)
	{
		courseTitle = ct;
	}
};

// Class HOD

class HOD : public Academic,public Administration
{
	void updateemp(int eid,string jt,int cid,string ct)
	{
		Academic :: courseID = cid;
		Academic ::jobTitle = jt;
		Academic::employeeID = eid;
		Academic::courseTitle = ct;

		
	}
};

int main() {

	// Declare an object of class Student,Person
	Person p1;
	Administration a1;
	Academic ac;
	HOD h1;
	Student s1(14,6);
	return 0;
}
