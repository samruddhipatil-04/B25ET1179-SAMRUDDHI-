#include <iostream>
using namespace std;

// Base class 1: basic employee information
class EmployeeInfo {
protected: 
    int id;
    string name;

public: // Function members
    void inputBasicInfo() {
        cout << "Enter Employee ID: ";// for id
        cin >> id;
       
        cout << "Enter Name: "; //for name 
        cin >> name;
    }

    void displayBasicInfo() const {// display after entering
        cout << "ID          : " << id ;
        cout << "\nName        : " << name ;
    }
};

// Base class 2: promotion information
class PromotionInfo {
protected:
    float performance;  // rating out of 10
    int experience;     //  experiance in years 

public:
    void inputPromotionInfo() {
        cout << "Enter Performance Rating (0-10): ";
        cin >> performance;
        cout << "Enter Years of Experience: ";
        cin >> experience;
    }

    void displayPromotionInfo() const {
        cout << "\nPerformance : " << performance << " / 10\n" ;
        cout << "Experience  : " << experience << " years\n" ;
    }
};

// Derived class: multiple inheritance
class Employee : public EmployeeInfo, public PromotionInfo {
public:
    void input() {
        inputBasicInfo();
        inputPromotionInfo();
    }

    bool isEligible() const {
        return experience >= 3 && performance >= 7.5;
    }

    void display() const {
        cout << "\n------ Employee Details ------\n";
        displayBasicInfo();
        displayPromotionInfo();
        cout << "------------------------------\n";
        if (isEligible())
            cout << "Result: ELIGIBLE for promotion.\n";
        else
            cout << "Result: NOT eligible for promotion.\n";
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}
