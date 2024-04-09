#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2) //sum operator definition
{
    ComplexNumber c(c1.real + c2.real, c1.im + c2.im);
    return c;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2) //equality operator definition
{
    bool b;
    if ( abs( c1.real-c2.real)< 5e-16 &&  abs(c1.im -c2.im)< 5e-16)
    {
        b = true;
    }
    else
    {
        b = false;
    }
    return b;
}

ostream& operator<<(ostream& os, const ComplexNumber& c) //output operator definition
{
    if (c.real != 0)
    {
        if (c.im < 0)
        {
            if (c.im == -1) {os << c.real << "i";}
            else {os << c.real << c.im << "i";}
        }
        else if (c.im > 0)
        {
            if (c.im == 1)
            {
                os << c.real << "+" << "i";
            }
            else
            {
                os << c.real << "+" << c.im << "i";
            }
        }
        else if (c.im == 0)
        {
            os << c.real;
        }
    }
    else if (c.real == 0)
    {
        if (c.im == 0)
        {
            os << c.real;
        }
        else
        {
            if (c.im == 1) {os << "i";}
            else if (c.im == -1) {os << "-i";}
            else{os << c.im << "i";}
        }
    }
    return os;
}

ComplexNumber conjugate(const ComplexNumber& c) //conjugate function definition
{
    ComplexNumber con(c.real, -c.im);
    return con;
}
