

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NUM_PASSENGERS = 10;

struct passengerRecord {
	string pname;
	int bags;
	float ticketprice;
	const float airport_tax = 110.038;

};

int main() 
{
	//read in the student scores from a file
	ifstream  ifs("passangerrecord.txt");
	string name;
	int b1;
	float t_p;
	struct passengerRecord records[10];
	if (ifs.fail()) {
		cout << "Error opening student records file (passangerrecord.txt)" << endl;
		exit(1);
	}
	int i = 0;
	while (!ifs.eof()) {
		ifs >> name >> t_p>>  b1;
		//	    cout << "student: " << sname <<  " adding quiz1: " << q1 << " quiz2: "
		//				<< q2 << " midterm Exam: " << me << " and final exam: " << fe << endl;
		records[i].pname = name;
		records[i].bags = b1;
		records[i].ticketprice = t_p;
		i++;
	}

	cout << i << " student records read ... processing ... processing" << endl;
	for (int j = 0; j < i; j++) {
		cout << "Passenger Name ......."<<records[j].pname << "\n Bags ......." << records[j].bags << "\nTicket Price ......." << records[i].ticketprice <<"\nAirport Tax ......."<< records[i].airport_tax<<"\nNet Price ......."<< records[i].ticketprice+ records[i].airport_tax;
		cout << "\n";
	}

	return 0;
}



/*#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream file;
	file.open("passangerrecord.txt");
	string name = "Leo Vattoly";
	float t_p = 1500.5;
	int b1 = 8;
	file << "Alan Turing" << t_p << b1;
	file << "\nLeo Vattoly" << 1566.5 << 8;
	file.close();
	return(0);
}*/