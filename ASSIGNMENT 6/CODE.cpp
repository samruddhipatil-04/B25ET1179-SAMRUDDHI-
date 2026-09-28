#include <iostream>
using namespace std;

class Complex {                 // class declaration  
    float real, imag;           // data members 

public:                         //member functions
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload += operator
    Complex& operator+=(const Complex& c) {
        real += c.real;
        imag += c.imag;
        return *this;
    }

    // Display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(2, 5);       // declaring class object 

    cout << "First number:  ";
    c1.display();
    cout << "Second number: ";
    c2.display();

    c1 += c2;                          // calls c1.operator+=(c2)

    cout << "After c1 += c2: ";
    c1.display();

    return 0;
}
