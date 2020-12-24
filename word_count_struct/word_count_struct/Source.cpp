#include <iostream>
#include <fstream>
#include <string>
#include <vector> 
#include <algorithm> 
using namespace std;

struct wordArray {
	string words ;
}*p;
int main() {

	fstream newfile;
	// Declaring Vector of String type 
	vector<string> word;
	vector<string>::iterator words_unique;
	
	newfile.open("uniquewords.txt", ios::in); //open a file to perform read operation using file object
	if (newfile.is_open()) 
	{   //checking whether the file is open
		string tp;
		while (getline(newfile, tp)) { //read data from file object and put it into string.
			word.push_back(tp);
		}
		newfile.close(); //close the file object.

	}
	// Using std::unique 
	words_unique = std::unique(word.begin(), word.begin() + word.size());

	// Resizing the vector so as to remove the undefined terms 
	word.resize(std::distance(word.begin(), words_unique));
	int n = word.size();
	p = new wordArray[n];

	for (int i = 0; i < n; i++)
		(p+i)->words = word[i];

	// Print Strings stored in structure 
	for (int i = 0; i < n; i++)
		cout << (p + i)->words << "\n";
	cout << "Count of Unique words: " << n;
	

}
