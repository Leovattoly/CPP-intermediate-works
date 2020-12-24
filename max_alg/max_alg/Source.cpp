#include<iostream>
using namespace std;

int main()
{
	int fmax[10];
	int max = 0;
	for (int i = 0; i < 10; ++i)
	{
		cout << "Enter the " << i+1 << "th number: ";
		cin >> fmax[i];
	}
	max = fmax[0];
	for (int i = 0; i < 10; ++i)
	{
		if (fmax[i] > max)
		{
			max = fmax[i];
		}
	}
	cout << "Maximum Value netered is " << max;
	return 0;
}