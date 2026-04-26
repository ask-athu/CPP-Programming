#include <iostream>

// Making class and initializing its object with normal functions

using namespace std;

class Demo
{
public:
    int A = 0;
    int B = 0;

    void setNumber(int X, int Y)        // Set Value to class object via a function .
    {
        A = X;
        B = Y;
    }

    void printNumber()
    {
        cout << "Value of A : " << A << "\n";
        cout << "Value of B : " << B << "\n";
    }

};

int main()
{
    Demo obj1 ;
    obj1.setNumber(10,20);
    obj1.printNumber();

    cout << "EXIT SUCCESS" ;

    return (0);
}