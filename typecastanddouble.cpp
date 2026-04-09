#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    // TypeCast to int double it and print
    cout<<stoi(num)*2;
    return 0;
}
