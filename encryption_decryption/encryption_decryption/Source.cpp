#include <fstream>
#include <iostream>
using namespace std;

int main() {
	char data[100];

	// open a file in read mode.
	ifstream infile;
	infile.open("file.txt");
	infile >> data;

	// close the opened file.
	infile.close();

	int i;
	int n = strlen(data);

	// Converting data into cipher text (Encrypted format)
	for (i = 0; i < n; i++)
	{
		data[i] = data[i] + 10;
	}

	

	// open a file in write mode.
	ofstream outfile;
	outfile.open("encrypted.txt");

	// write inputted data into the file.
	outfile << data << endl;

	// close the opened file.
	outfile.close();

	// open the encrypted file in read mode.
	ifstream ifile;
	ifile.open("encrypted.txt");

	ifile >> data;

	cout << "\nEncrypted Text : " << data;
	// close the opened file.
	ifile.close();

	n = strlen(data);

	// Converting data into cipher text (Encrypted format)
	for (i = 0; i < n; i++)
	{
		data[i] = data[i] -10;
	}

	cout << "\nDecrypted Text : " << data;

	return 0;
}