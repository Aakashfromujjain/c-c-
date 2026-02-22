#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    // Virtual function - key for runtime polymorphism
    virtual void start() {
        cout << "Vehicle is starting..." << endl;
    }
    
    virtual ~Vehicle() {}
};

// Derived class 1
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car engine starts: Vroom!" << endl;
    }
};

// Derived class 2
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike engine starts: Putt putt!" << endl;
    }
};

// Function that demonstrates runtime polymorphism
void startVehicle(Vehicle* v) {
    v->start();  // Calls the correct version at runtime!
}

int main() {
    cout << "=== Runtime Polymorphism Demo ===" << endl;
    
    // Create objects
    Car car;
    Bike bike;
    
    cout << "\n1. Normal function calls:" << endl;
    car.start();
    bike.start();
    
    cout << "\n2. Runtime Polymorphism:" << endl;
    cout << "Same function call, different results!" << endl;
    
    // Base pointer pointing to different objects
    Vehicle* ptr;
    
    ptr = &car;
    ptr->start();    // Calls Car's start() method
    
    ptr = &bike;
    ptr->start();    // Calls Bike's start() method
    
    cout << "\n3. Using function with polymorphism:" << endl;
    startVehicle(&car);   // Passes car object
    startVehicle(&bike);  // Passes bike object
    
    cout << "\n4. Array demonstration:" << endl;
    Vehicle* vehicles[] = {&car, &bike};
    
    for(int i = 0; i < 2; i++) {
        cout << "Starting vehicle " << i+1 << ": ";
        vehicles[i]->start();
    }
    
    return 0;
}

/*
How Runtime Polymorphism Works Here:

1. VIRTUAL KEYWORD: Makes the function call decision at runtime
2. SAME INTERFACE: All calls use Vehicle* pointer
3. DIFFERENT BEHAVIOR: Each derived class provides its own implementation
4. RUNTIME DECISION: Program decides which function to call based on actual object type

Output will be:
=== Runtime Polymorphism Demo ===

1. Normal function calls:
Car engine starts: Vroom!
Bike engine starts: Putt putt!

2. Runtime Polymorphism:
Same function call, different results!
Car engine starts: Vroom!
Bike engine starts: Putt putt!

3. Using function with polymorphism:
Car engine starts: Vroom!
Bike engine starts: Putt putt!

4. Array demonstration:
Starting vehicle 1: Car engine starts: Vroom!
Starting vehicle 2: Bike engine starts: Putt putt!
*/
