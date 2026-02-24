#include<iostream>
using namespace std;
class Demo
{
	public:
		virtual void show()
		{
			cout<<"Demo Working";
		}
};
class Sub:public Demo
{
	public:
		void show()
		{
			cout<<"Sub Working";
		}
};
int main()
{
	Demo d1;
	Sub s1;
	Demo *dm[2];
	dm[0]=&d1;
	dm[1]=&s1;
	dm[0]->show(); //to call object using pointer type
	dm[1]->show();
	return 0;
}
