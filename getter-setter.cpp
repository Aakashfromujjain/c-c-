// C++ program to demonstrate the use of getters and setters

#include <iostream>
using namespace std;

// Define Class Employee
class Employee {
private:
    // Define Private member salary
    int salary;

public:
    // Setter
    void setSalary(int s) { salary = s; }

    // Getter
    int getSalary() { return salary; }
};

int main()
{

    // create object of class employee
    Employee myObj;

    // set the salary
    myObj.setSalary(10000);

    // get the salary and print it
    cout << "Salary is: " << myObj.getSalary();
    return 0;
}
