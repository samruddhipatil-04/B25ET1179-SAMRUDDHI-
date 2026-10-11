//Include the header needed for input/output (cout)
#include <iostream>
using namespace std;

// Create the base class
class Product {
public:
    // 'virtual' tells C++ to decide which version of this function
    // to call at RUN TIME, based on the object the pointer points to
    virtual double calculatePrice() {
        return 100;   // default price for a generic product
    }
};

//Create the first derived class (inherits from Product)
class Electronics : public Product {
public:
    // This overrides the base class function with its own logic
    double calculatePrice() {
        return 1000 + 180;   // price + 18% tax
    }
};

//Create the second derived class (inherits from Product)
class Clothing : public Product {
public:
    // This also overrides the base class function, with different logic
    double calculatePrice() {
        return 500 - 50;     // price - 10% discount
    }
};

int main() {
    //Create a BASE class pointer.
    // It can hold the address of any derived class object.
    Product* p;

    //Create objects of the derived classes
    Electronics e;
    Clothing c;

    //Make the base pointer point to the Electronics object
    p = &e;
    // The pointer type is Product*, but the object is Electronics,
    // so Electronics::calculatePrice() runs (this is run-time polymorphism)
    cout << "Electronics price: " << p->calculatePrice() << endl;

    //Make the same pointer point to the Clothing object
    p = &c;
    // Same call, same pointer, but now Clothing::calculatePrice() runs
    cout << "Clothing price: " << p->calculatePrice() << endl;

    return 0;
}
