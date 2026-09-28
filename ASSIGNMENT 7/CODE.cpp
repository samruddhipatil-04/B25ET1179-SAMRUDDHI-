#include <iostream>
using namespace std;

class String { //declaration of class 
    char* str;  //data members 

public:         // member function 
    // Constructor
    String() {
        str = new char[100];
        str[0] = '\0';
        cout << "Constructor called" ;
    }

    // Accept a string
    void accept() {
        cout << "\nEnter a string: ";
        cin.getline(str, 100);
    }

    // Display the string
    void display() {
        cout << "You entered: " << str ;
    }

    // Destructor
    ~String() {
        delete[] str;
        cout << "\nDestructor called" ;
    }
};

int main() {
    String s; //declaration of object 
    s.accept(); // calling accept function 
    s.display(); // calling display function 
    return 0;
}
