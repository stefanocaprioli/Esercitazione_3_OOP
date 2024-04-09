#pragma once

#include <iostream>

using namespace std;

struct ComplexNumber //complex numbers class definition with struct
{
    double real;
    double im;

    ComplexNumber() = default; // default constructor

    ComplexNumber(double a, double b) //double constructor
    {
        real = a;
        im = b;
    }
};

inline ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2); //sum operator declaration
inline bool operator==(const ComplexNumber& c1, const ComplexNumber& c2); //equality boolean operator declaration
inline ostream& operator<<(ostream& os, const ComplexNumber& c); //output operator declaration
inline ComplexNumber conjugate(const ComplexNumber& c); //conjugate function declaration
