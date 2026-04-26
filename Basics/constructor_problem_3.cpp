#include <iostream>

// Write a C++ program to create a class named Demo.
// The class should contain two data members A and B.
//
// Create two constructors:
// 1) Default constructor that initializes A = 0 and B = 0
// 2) Parameterized constructor that initializes A and B using arguments
//
// Create a member function show() to display values of A and B.
//
// In main(), create two objects:
// Demo obj1;
// Demo obj2(5,10);

// obj1.show();
// obj2.show();

using namespace std;

class Demo
{
public:
    int A = 1;
    int B = 1;

    Demo();
    Demo(int, int);

    void show()
    {
        cout << "Number 1 : " << A << endl;
        cout << "NUmber 2 : " << B << endl;
    }
};

Demo ::Demo() // Default value
{
    A = 0;
    B = 0;
}

Demo ::Demo(int X, int Y)
{
    A = X;
    B = Y;
}

int main()
{
    Demo obj1;
    obj1.show();

    Demo obj2(10, 5);
    obj2.show();

}