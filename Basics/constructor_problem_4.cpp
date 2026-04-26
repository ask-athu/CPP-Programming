#include<iostream>

// Copy Constructor Usage :
// Number n1(50);
// Number n2(n1);

// n1.display();
// n2.display();

using namespace std;

class Demo 

{
    public :
        int X ;

        Demo(int);
        Demo(Demo &ref);

    void show()
    {
        cout << "Value : " << X << endl;
    }
};

Demo :: Demo(int A)
{
    X = A;
}

Demo :: Demo(Demo &ref)
{
    X = ref.X;
}

int main()
{
    Demo obj1(10);

    Demo obj2(obj1);

    obj1.show();
    obj2.show();
}