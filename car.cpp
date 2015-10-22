#include <iostream>

using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}// sets x, y to a,b
	void showmove()
	{
		cout << x ;
		cout << endl;
		cout << y;
		cout << endl;
	} // shows current x, y values
	Move add(const Move & m) const
	{
		double newX = this->x+ m.x;
		double newY = this->y+ m.y;
		Move addition(newX, newY);
		return  addition ;
	}
	// this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y,	
	//creates a new move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}// resets x,y to a, b
};
void main()
{	
	
	Move item(9,9);
	item.showmove();
	Move New_item (3,4)  ;
	/*
	New_item = &item;
	New_item->reset(5, 5);//elmoshkela hena eni b3'iar el x w el y f lma 23ml add b3ml add 3la elgodad msh elodam
	*/
	item = item.add(New_item);
	item.showmove();
	system("PAUSE");
}