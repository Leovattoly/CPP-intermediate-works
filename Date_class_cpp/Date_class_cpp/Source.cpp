#include <iostream>
using namespace std;

class Date {
public:
	int day;
	int month;
	int year;

	//Constructor

	Date()
	{
		day = 0;
		month = 0;
		year = 0;
	}

	Date(int d)
	{
		if (d >= 1 && d <= 31)
		{
			day = d;

		}
		else
		{

			day = 1;

		}
	}

	Date(int d, int m, int y)
	{
		if (d >= 1 && d <= 31 && m >= 1 && m <= 12)
		{
			day = d;
			month = m;
			year = y;

		}
		else
		{

			day = 0;
			month = 0;
			year = 0;
		}



	}
	Date operator++()
	{
		++day;
		return Date(day);
	}
	Date operator ++(int)
	{
		Date date;
		date.day = ++day;
		return date;
	}

	Date operator--()
	{
		--day;
		return Date(day);
	}

	Date operator --(int)
	{
		Date date;
		date.day = --day;
		return date;
	}
};

int main()
{
	Date ob1(26, 12, 1996);
	++ob1;
	ob1++;
	--ob1;
	ob1--;
	cout <<"The date is :"<< ob1.day;
	return 0;
}