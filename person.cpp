#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	Person()
	{
		lname = "";
	
		fname[0] = '\0';
	}
	Person(const string & ln, const char *fn = "Heyyou" )
	{
		lname = ln;
		for (int i = 0; i < LIMIT; i++) {
			fname[i] = fn[i];
		}
		
	}// #2
		// the following methods display lname and fname
	void Show() const
	{
		cout << fname << " " << lname << endl;
	} // firstname lastname format
	void FormalShow()
	{
		cout << lname << " " << fname << endl;
	} 
	
};
int main()
{
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;


	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;


	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;

	// etc. for two and three
	system("PAUSE");
}