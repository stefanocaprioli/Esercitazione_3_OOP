#include <iostream>
#include "ComplexNumber.hpp"
#include "ComplexNumber.cpp"

using namespace std;

int main()
{
    ComplexNumber a(1,4);
    ComplexNumber b(1,-3);
    ComplexNumber c = a + b;
    ComplexNumber eps(4e-16,4e-16);
    ComplexNumber d = a + eps;



    cout << a << endl << b << endl << c << endl ;
    ComplexNumber k = conjugate(a);
    cout << k << endl;
    bool s = (a == d);
    if (s == 0)
    {
        cout << "a is not equal to d" << endl;

    }
    else {
        cout << "a is equal to d" << endl;

    }
    bool l = (a==b);
    if (l == 0)
    {
        cout << "a is not equal to b" << endl;

    }
    else {
        cout << "a is equal to b" << endl;

    }
    return 0;
}
