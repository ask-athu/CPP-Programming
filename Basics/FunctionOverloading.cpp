#include<iostream>

using namespace std ;

class Demo
{
    public :

        int Addition (int A, int B)
        {
            return (A + B);
        }

        int Addition (int A, int B, int C)
        {
            return (A + B + C);
        }

        int Addition (int A, int B, int C, int D)
        {
            return (A + B + C + D);
        }

        int Addition (int A, double B, float C)
        {
            return (A + B + C);
        }

        double Addition (double A, double B, float C)
        {
            return (A + B + C);
        }

};

int main() 
{
    Demo obj1 ;

    cout << "Value : " << obj1.Addition(10, 20) << "\n";            // Function Overloading : Compiler decides function based on Parameters.
    cout << "Value : " << obj1.Addition(10, 20, 30) << "\n";
    cout << "Value : " << obj1.Addition(10, 20, 30, 40) << "\n";

    int X = obj1.Addition(10, 30.2, 10.7F);
    // Internally 30.2 becomes int as type of X is int also return type of Addition() is int here
    cout << "Value : " << X << "\n";

    double W = obj1.Addition(10.9, 30.2, 10.7F);   
    // Internally 30.2 is treated as it is, as type of W is double and Addition() has return type double
    cout << "Value : " << W;

    return (0);
}

/*
#include<iostream>

// w/o Function Overloading : UGLY remembering all function names.

using namespace std ;

class Hello 
{
    public :

        int AdditionTwo(int A, int B)
        {
            return (A + B);
        }

        int AdditionThree(int A, int B, int C)
        {
            return (A + B + C);
        }

        int AdditionFour (int A, int B, int C, int D)
        {
            return (A + B + C + D);
        }
};

int main()
{
    Hello obj1;
    
    cout << "Output of AdditionTwo : " << obj1.AdditionTwo(10, 20) << "\n";
    cout << "Output of AdditionThree : " << obj1.AdditionThree(10, 20, 30) << "\n";
    cout << "Output of AdditionFour : " << obj1.AdditionFour(10, 20, 30, 40);


    return (0);
}

*/