#include<iostream>
#include<string>

using namespace std;
class BankAccount
{
	// Access specifier 
public:

	// Data Members 
	static string acc_no;
	static int accno;
	string cust_name;
	string cust_address;
	string acc_type;
	double acc_balance;
	long int acc_no_transactions;

	// Constructor 

	BankAccount()
	{
		acc_no = "N00" + to_string(accno);
	}
	/*BankAccount(double b =0,string n,string a,string acc_t = "s",long int acc_tran = 0)
	{
		acc_no = "N00" + to_string(accno);
		cust_name = n;
		cust_address = a;
		acc_type = acc_t;
		acc_balance = b;
		acc_no_transactions = acc_tran;
	}*/

	// Member Functions() 
	void print_acc_info()
	{
		cout << "\nAccount Number is: " << acc_no;
		cout << "\n Name of customer: " << cust_name;
		cout << "\n Address of customer: " << cust_address;
		cout << "\n Type of account: " << acc_type;
		cout << "\n Balance in account: " << acc_balance;
		cout << "\n Number of transactions: " << acc_no_transactions;


	}

	void deposit(double deposit_amt)
	{
		acc_balance = acc_balance + deposit_amt;
		cout << "\n New Balance in account: " << acc_balance;
	}
	void withdraw(int withdraw_amt)
	{
		acc_balance = acc_balance - withdraw_amt;
		cout << "\n New Balance in account: " << acc_balance;
	}

	void address_chng(string new_address)
	{
		cust_address = new_address;
		cout << "\n New Address of customer: " << cust_address;
	}
};

int BankAccount::accno = 1;

int main() {

	string n, addr, ty;
	int n,i;
	double bl;
	// Declare an object of class geeks 
	BankAccount obj[100];

	// Enter the information (name, address, type of account, balance) of customers.
	//(Number of customers are to be entered by the user.)
	
	cout << "Enter the nuber of customers: ";
	cin >> n;
	for ( i = 1; i <=  n ; ++i)
	{
		cout << "Enter the name :";
		cin >> n;
		obj[i].cust_name = n;
		cout << "Enter the address :";
		cin >> addr;
		obj[i].cust_address = addr;
		cout << "Enter the type of account:";
		cin >> ty;
		obj[i].acc_type = ty;
		cout << "Enter the balance of account:";
		cin >> bl;
		obj[i].acc_balance = bl;
	}
	cout << "\nPlease enter the cousermer no to be printed: ";
	cin >> n;

	//Display information and balance of customer
	obj[n].print_acc_info();

	//Deposit more amount in the balance of any customer
	//Add some amount to the account of any customer and then display the final
	obj[n].deposit(100.5);

	//Withdraw some amount from the balance deposited

	obj[n].withdraw(10.6);

	//Change the address of customer

	obj[n].address_chng("New Address");

	// accessing member function 
	obj1.printname();
	return 0;
}