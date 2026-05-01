#include<iostream>

using namespace std ;

// Contructor and Destructor both are treated as Behaviours.
// Contructors :    1. Default : No parameters, get all as it is. ( Same / Default )
//                  2. Parameterized : Specify with some parameters. ( Modified / Changed )
//                  3. Copy : Denotes copy of either default or parameterized. ( Both )

class Marvellous
{
    // Access specifier
    public :
    int no1 , no2 ;                     // Characteristics

   // Default Constructor ( No parameters )
   Marvellous()
   {
        cout << "Inside default contructor ! \n";
        no1 = 0;
        no2 = 0;
   }

   // Parameterized Contructor ( Accepts 2 parameters here )
   Marvellous(int A, int B)
   {
        cout << "Inside parameterized contructor ! \n";
        no1 = A;
        no2 = B;
   }

   // Copy Constructor 
   Marvellous( Marvellous &ref )       //here ref is obj2 ( nickaname of obj2 )
   {
        cout << "Inside Copy Contructor ! \n";
        no1 = ref.no1;
        no2 = ref.no2;
   }

   // Destructor
   ~Marvellous()
   {
        cout << "Inside destructor ! \n";
   }

};

int main()
{
    cout << "main() Starting \n";
    
    Marvellous obj1();        // Default Constructor Object 

    Marvellous obj2(11,21);   // Parameterized Contructor Object
    
    Marvellous obj3(obj2);    // Copy Contructor Object

    cout << "main() Ending \n";

    return (0);
    // All destructors are called.  Memory free() / De-allocation.
}