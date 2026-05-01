#include<iostream>

// This is to explain reference keyword.

using namespace std;

class Demo
{
    public :
        int i;
        int j;

        Demo()
        {
            puts("Inside Default Constructor");
            i = 0;
            j = 0;
        }

        Demo(int a, int b)
        {
            puts("Inside Parameterized Constructor");
            i = a;
            j = b;
        }

        Demo(Demo &nickname)
        {
            puts("Inside Copy Constructor");
            i = nickname.i;
            j = nickname.j;
        }

};

int main()
{

    Demo obj1 ;
    cout << "Demo obj1 i : " << obj1.i << endl ;
    cout << "Demo obj1 j : " << obj1.j << endl ;

    Demo obj2(10,20);
    cout << "Demo obj2 i : " << obj2.i << endl ;
    cout << "Demo obj2 j : " << obj2.j << endl ;

    Demo obj3(obj2);
    cout << "Demo obj3 i : " << obj3.i << endl ;
    cout << "Demo obj3 j : " << obj3.j << endl ;

    return(0);
}