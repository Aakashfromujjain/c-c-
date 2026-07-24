#include <iostream>
using namespace std;

inline void displayMessage(){
    for (int i = 0; i < 5; i++){
        cout << "Hello " << i << endl;
    }
}
int main(){
    displayMessage();
    return 0;
}
