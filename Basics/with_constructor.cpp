#include<iostream>

using namespace std;

class Demo
{
    public :
        
        int X = 0;
        int Y = 0;

        Demo(int A, int B);   // constructor declaration : Must be done in public section class

        void printNumber()
        {
            cout << "Value of X is : " << X << "\n";
            cout << "Value of Y is : " << Y << "\n";
        }
};

Demo :: Demo(int A, int B)   // constructor definition : via scope resolution operator
{
    X = A;
    Y = B;
}

int main()
{
    Demo obj1(10,20);

    obj1.printNumber();

    return (0);
}