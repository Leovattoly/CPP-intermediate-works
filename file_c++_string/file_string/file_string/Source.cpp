#include <fstream>
#include <iostream>
#include<string>
	using namespace std;

	int main() 
	{
		char str_1 []= "CS-121 Object-Oriented Programming";
		// open a file in both read and write mode.
		fstream outfile_1;
		fstream outfile_2;
		
		outfile_1.open("course.txt");
		outfile_2.open("result.txt");

		// write inputted data into the file.
		outfile_2 << str_1 << endl;


		// Read file by character by charater 
		ifstream outfile_3;
		outfile_3.open("result.txt");
		char c;
		while (outfile_2.get(c))   // loop	getting single characters
		{
			cout<< c;
		}

		// Reading file in word by word

		string word;
		while (outfile_3 >> word)
		{
			// displaying content 
			cout << word << endl;
		}

		// Reading file in line by line
		string tp;
		while (getline(outfile_3, tp)) 
		{ 
			cout << tp << "\n"; //print the data of the string
		}
			
		outfile_1.close();
		outfile_2.close();
		outfile_3.close();
	return 0;
}
