#include<iostream>
using namespace std;

int cut(int n)
{
	if (n == 1)
		return 2;
	else
	{
		return(2 + cut(n - 1));
	}
}
void main()
{
	int re, n;
	cout << "Enter the number of cuts: ";
	cin >> n;
	re = cut(n);
	cout << "Number of pieces :"<<re;

}