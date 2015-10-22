#include <iostream>
#include <string>
using namespace std;
class employee
{
private :
	string name;
	double balance;
	int deposite_number;
public :
	employee(string n);
	void set_name(const string n);
	const string get_name();
	void display_name();
	void set_deposite_no(int num);
	int get_deposite_no();
	void display_deposite_no();
	void set_balance(double bal);
	double get_balance();
	void display_balance();
	void deposit(int bal);
	void withdraw(int bal);
};

int main()
{
	employee user1("marina");
	user1.set_deposite_no(1);
	user1.set_balance(1000);
	user1.deposit(200);
	user1.display_balance();
	system("PAUSE");
}
employee:: employee(string n)
{
	name = n;
	balance = 0;
	deposite_number = 0;
}
void employee::set_name(const string n)
{
	name = n;
}
const string employee:: get_name()
{
	return name;
}
void employee::display_name()
{
	cout << &name;
}
void  employee::set_deposite_no(int num)
{
	deposite_number = num;
}
int employee:: get_deposite_no()
{
	return deposite_number ;
}
void  employee::display_deposite_no()
{
	cout << deposite_number;
}
void  employee::set_balance(double bal)
{
	balance = bal;
}
double  employee::get_balance()
{
	return balance;
}
void  employee::display_balance()
{
	cout << balance;
}
void  employee::deposit(int bal)
{
	balance += bal;
}
void  employee::withdraw(int bal)
{
	balance -= bal;
}