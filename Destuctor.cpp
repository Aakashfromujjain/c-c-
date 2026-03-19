#include<iostream>
using namespace std;
int a=0;

class Demo
{
	public:
		Demo()
		{
			cout<<"Constructor Working "<<++a<<endl;
		}
		~Demo(){
			cout<<"Distructor Working"<<a--<<endl;
		}
};

int main()
{
	cout<<"Main function start"<<endl;
	Demo d1,d2,d3,d4;
	{
	cout<<"First Block start"<<endl;
	Demo d5,d6;
	cout<<"first block close"<<endl;
}
{
	cout<<"Second Block Start"<<endl;
	Demo d7,d8;
	cout<<"Second Block close"<<endl;
}
cout<<"Main block close"<<endl;
return 0;
}
