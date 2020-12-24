#include<iostream>
#include <iomanip>      // std::setprecision#include<cstring>
using namespace std;
class Test {


	char* m_title;


	double m_mark;


	public:

		//1 - make a constructor to set the mark to a value and initialize the title to nullptr.
		Test()
		{
			m_mark = 100;
			m_title = nullptr;


		}

		//2- make a subtract function to reduce the mark by a received value.
		void subtract(double s_mark)
		{
			m_mark = m_mark - s_mark;
		}

		//3- make a constructor to set the mark (first argument) and the title (second argument) to values. 
		Test(double m, char title[])
		{
			m_mark = m;
			int count = 0;
			while (*title != '\0') {
				count++;
				title++;
			}
			m_title = new char[count];
			m_title = title;
		}

		//4- make a member function to print the Test as follows: Title in 30 spaces left justified and mark in 5 spaces
		//with one digit after the decimal point.
		void print_()
		{
			cout.width(30);
			cout <<left<<m_title;
			cout.width(5);
			cout << fixed <<setprecision(1) << m_mark;
		}

		//5- make a destructor.
		~Test()
		{
			delete[] m_title;
		}

		//6- make a set function to set the title to a new value. 

		void set_value(char new_title[])
		{
			int count = 0;
			while (*new_title != '\0') {
				count++;
				new_title++;
			}
			m_title = new char[count];
			m_title = new_title;
		}

		//7- make a add function to add one to the mark

		void add_mark(double value)
		{
			m_mark = m_mark + value;
		}
};

int main()
{
	double m = 10;
	Test t1;
	t1.print_();


}