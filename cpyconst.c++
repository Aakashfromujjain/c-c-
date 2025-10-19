#include<iostream>
using namespace std;
class Point
{
	private:
	int x,y;
	public:
		Point(int x1,int y1)
		{
			x=x1;
			y=y1;
		}
		//Copy constructor
		Point(const Point &t2)		//t2 is refrence variable
		{
			x=t2.x+10;
			y=t2.y+20;
		}
		
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
};
int main()
{
	Point p1(10,15);		//Normal constructor is called here
	Point p2=p1;			//Copy constuctor is called here
	
	//Let us access values assigned by constuctor
	cout<<"p1.x= "<<p1.getX()<<", p1.y= "<<p1.getY();
	cout<<"\n p2.x= "<<p2.getX()<<", p2.y= "<<p2.getY();
	return 0;
}
