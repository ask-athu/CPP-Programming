#include<iostream>

// The class should contain the following data members:
// 1) rollNo
// 2) marks
//
// Create a parameterized constructor to initialize these values.
// The constructor must be defined outside the class using the scope resolution operator (::).
//
// Also create a member function display() to print the roll number and marks.

using namespace std;

class student
{
    public :
        int rollNo = 0;
        int marks = 0;
        string Name = "\0";

        student(int, int, string);

        void display()
        {
            cout << "Displaying student details : \n" << endl ;
            cout << "Name : " << Name << endl;
            cout << "Roll No : " << rollNo << endl;
            cout << "Marks : " << marks << endl;
        }
};

student :: student(int A, int B, string S)
{
    rollNo = A;
    marks = B;
    Name = S;
}

int main()
{
    student obj1(7,92,"Ankita");
    obj1.display();

    return(0);
}


