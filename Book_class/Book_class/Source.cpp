/*#include <iostream> 
using namespace std;
class Book
{
	// Access specifier 
public:

	// Data Members 
	const char* title[50];
	const char* author[20];
	int pages;
	

	// Member Functions() 
	void setTitle(const  char* t)
	{
		if (t != '\0')
		{
			*title = t;
		 }
		else
		{
			*title = '\0';
		}
	}
	void setAuthor(const char* t)
	{
		if (t != '\0')
		{
			*author = t;
		}
		else
		{
			*author = '\0';
		}
	}
	void setPages(const int p)
	{
		if (p != NULL)
		{
			pages = p;
		}
		else
		{
			pages = 0;
		}
	}
	void display()
	{
		//static int i = 0;
		cout<<*title<<" by "<< *author<<"("<< pages<<"pg)\n";
	}
};

class Library : public Book
{
	// Access specifier 
public:

	// Data Members 
	const char* loc[30];
	Book * m_book;
	int nbook;

	// Constructor 
	Library()
	{
		*loc = '\0';
		m_book = NULL;
		nbook = 0;
	}

	Library(const char location[], int n_book)
	{
		*loc = location;

		//dynamically allocating memory
		m_book = new Book[n_book];

		addBooks( m_book);
	}

	// Member Functions() 
	void addBooks( Book mBook[])
	{
		/*char* a[50];
		char* t[20];
		int p;
		for (int i = 0; i < sizeof(mBook); ++i)
		{
			cout << i + 1 << " th Book Author name: ";
			cin>>*a;
			mBook[i].setAuthor(a);
			cout << i + 1 << " th Book Title name: ";
			cin>>*t;
			mBook[i].setTitle(t);
			cout << i + 1 << " th Book page number: ";
			cin >> p;
			mBook[i].setPages(p);

		}*/ 
/*
		mBook[1].setAuthor("Deitel & Deitel ");
		mBook[1].setTitle("C++ How to program");
		mBook[1].setPages(500);
		mBook[2].setAuthor("Robert Lafore");
		mBook[2].setTitle("Object Oriented programming");
		mBook[2].setPages(448);
		mBook[1].display();
		mBook[2].display();

	}
	

};

int main() {

	// Declare an object of class Book 
	Library obj1 ("Etobicoke Public Lib",2);

	// accessing member function 
	obj1.display();
		
	return 0;
}*/


#include <iostream> 
using namespace std;
class Book
{
	// Access specifier 
public:

	// Data Members 
	const char* title[50];
	const char* author[20];
	int pages;

	// Member Functions() 
	void setTitle(const  char* t)
	{
		if (t != '\0')
		{
			*title = t;
		}
		else
		{
			*title = '\0';
		}
	}
	void setAuthor(const char* t)
	{
		if (t != '\0')
		{
			*author = t;
		}
		else
		{
			*author = '\0';
		}
	}
	void setPages(const int p)
	{
		if (p != NULL)
		{
			pages = p;
		}
		else
		{
			pages = 0;
		}
	}
	void display()
	{
		cout << "\nTitle: " << *title;
		cout << "\nAuthor: " << *author;
		cout << "\nNo. of pages: " << pages;
	}

	// Destructor for avoding the memory leaks
	~Book()
	{
		delete[] title;
		delete[] author;
	}
};


int main() {

	// Declare an object of class Book 
	Book obj1;

	// accessing member function 
	obj1.setAuthor("Alex Honlad");
	obj1.setTitle("Free Solo");
	obj1.setPages(359);
	obj1.display();
	return 0;
}