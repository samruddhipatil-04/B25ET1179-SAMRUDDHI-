#include <iostream>
using namespace std;

// ---------- FUNCTION TEMPLATE ----------
// T is a placeholder for any data type (int, float, char, etc.)
// The compiler creates the right version based on the arguments passed
template <typename T>
T maxOf(T a, T b) {
    return (a > b) ? a : b;   // returns the larger of the two values
}

// ---------- CLASS TEMPLATE ----------
// The class works with any data type chosen when the object is created
template <typename T>
class Calculator {
private:
    T a, b;                   // both numbers are of type T

public:
    // Constructor: stores the two values
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add()      { return a + b; }  //for addition 
    T subtract() { return a - b; }  //for substracion
    T multiply() { return a * b; }  //for multiplication
    T divide()   { return a / b; }   //for division
};

int main() {
    // ----- Using the function template -----
    // The type is detected automatically from the arguments
    cout << "Max of 10 and 20   : " << maxOf(10, 20) ;      // int
    cout << "\nMax of 3.5 and 2.1 : " << maxOf(3.5, 2.1) ;    // double
    cout << "\nMax of 'a' and 'z' : " << maxOf('a', 'z') ;    // char

    // ----- Using the class template -----
    // The type must be written explicitly inside < >
    Calculator<int> c1(20, 4);          // T becomes int
    cout << "\nInt Calculator (20, 4)" ;
    cout << "\nAdd      : " << c1.add() ;
    cout << "\nSubtract : " << c1.subtract() ;
    cout << "\nMultiply : " << c1.multiply() ;
    cout << "\nDivide   : " << c1.divide() ;

    Calculator<double> c2(7.5, 2.5);    // T becomes double
    cout << "\nDouble Calculator (7.5, 2.5)" ;
    cout << "\nAdd      : " << c2.add() ;
    cout << "\nSubtract : " << c2.subtract() ;
    cout << "\nMultiply : " << c2.multiply() ;
    cout << "\nDivide   : " << c2.divide() ;

    return 0;
}
