#include<iostream>
using namespace std;
class Demo
{
	public:
	static int a[10];
	static int i;

	 static void get()
	 {
	 	for(int i=0;i<10;i++){
	cout<<"value = ";
  	cin>>Demo::a[i];
		}
	 }
	static void show()
	{
		cout<<"Array is: ";
		for(i=0;i<10;i++){
		cout<<a[i]<<endl;
	}
	}
};
int Demo::a[10];
int Demo::i;

int main()
{
	Demo d1;
	d1.get();
	d1.show();
	
return 0;
}
