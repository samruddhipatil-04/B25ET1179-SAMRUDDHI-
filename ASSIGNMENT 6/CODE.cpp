#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Parameterized constructor to initialize real and imaginary parts
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the += operator
    Complex& operator+=(const Complex& other) {
        this->real += other.real;
        this->imag += other.imag;
        return *this; // Return a reference to the calling object
    }

    // Function to display the complex number
    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(4.5, 3.2);
    Complex c2(1.5, 2.3);

    std::cout << "Initial c1: ";
    c1.display();
    std::cout << "c2: ";
    c2.display();

    // Use the overloaded += operator
    c1 += c2;

    std::cout << "\nAfter c1 += c2:\n";
    std::cout << "c1: ";
    c1.display();

    return 0;
}
