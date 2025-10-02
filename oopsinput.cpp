#include<iostream>
using namespace std;

class Demo {
    char sp[10];

public:
    void get() {
       		gets(sp);
        }
    void show() {
            cout <<  sp << " bro"<<endl;
        }
};

int main() {
    Demo d;
    d.get();
    d.show();
    return 0;
}
