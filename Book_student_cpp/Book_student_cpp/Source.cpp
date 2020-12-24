#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string line;
	string delimiter = ":";
	string bookno;
	string book_no;
	ifstream studentfile("student.txt");
	ifstream bookfile("book.txt"); // Reading book file

	if (bookfile.is_open())
	{
		cout << "Enter the Book No: "; // Promting book number 
		cin >> bookno;
		while (getline(bookfile, line))
		{
			book_no = line.substr(0, line.find(delimiter)); 
			if(book_no == bookno)							// Checking the book number available or not
				cout << "Book found\n"<<line << '\n';	
		}
		bookfile.close();
	}

	else cout << "Unable to open file";

	return 0;
}