#include <iostream>

using namespace std;

// To create class rectangle, use constructor to assign values L = 10, B = 5 and Function to find area

class Rectangle
{
public:
    int length = 0;
    int breadth = 0;

    // Constructor declaration
    Rectangle(int L, int B);

    // Calc area function
    void Calculate_Area()
    {
        int area = length * breadth;
        cout << "Area : " << area << " unit sq" << endl;
    }
};

// Constructor defination
Rectangle::Rectangle(int L, int B)
{
    length = L;
    breadth = B;
}

int main()
{
    Rectangle obj1(10, 5);
    obj1.Calculate_Area();

    return(0);
}