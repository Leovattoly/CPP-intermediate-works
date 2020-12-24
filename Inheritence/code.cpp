#include <iostream>

using namespace std;

class A
{
    public :
        
    int a;
};

class B: public  A
{
public:
	int b;
};

class C : public  A
{
public:
	int c;
};

class D:public B, public C
{
public:
	int d;

};

int main ()
{
 D obj1;
obj1.B::a =1;
obj1.b =2;
obj1.c =3;
obj1.d =4;

cout <<obj1.b <<obj1.c<<obj1.d<<obj1.B::a ;
return 0;

}