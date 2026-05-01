/*
#include<iostream>

using namespace std ;

// Encapsulation : Bidning charecteristics and behavior together.
// Error in this code : As access specifier by default is private which is just in-accessible

class Marvellous
{
    // Access specifier ( Not declared so by default : private )

    int no1 , no2 ;                     // Characteristics

    void fun()
    {
        cout << "Inside Fun() \n";     // Behavior   
    }
 
    void gun() 
    {
        cout << "Inside Gun() \n";         // Behavior
    }

};

int main()
{
    // Object Creation ( Object : Instance of a Class )

    Marvellous obj1;
    Marvellous obj2;

    cout << "Size of obj1 of Class Marvellous is : " << sizeof(obj1) << "\n";   // 8 Bytes ( int + int )

    // Might create Garbage value -> as memory allocation in stack section
    cout << obj1.no1 << " \n";          
    cout << obj1.no2 << " \n";

    obj1.fun();
    obj1.gun();

    obj2.fun();
    obj2.gun();

    // Causes Error as they are private ! Cant access them.

    return (0);
}

*/