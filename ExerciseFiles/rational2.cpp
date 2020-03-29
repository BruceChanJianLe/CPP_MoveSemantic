#include <iostream>
#include <string>
#include "rationalClass2.hpp"

using namespace std;


int main(int argc, char ** argv)
{
    Rational a = 7;
    Rational b(5, 3);
    Rational c = b;
    Rational d = std::move(c);

    d = std::move(b);

    cout << "a is: " << a.c_str() << endl;
    cout << "b is: " << b.c_str() << endl;
    cout << "c is: " << c.c_str() << endl;
    cout << "d is: " << d.c_str() << endl;

    cout << a.c_str() << " + " << b.c_str() << " is " << Rational(a + b).c_str() << endl;

    return 0;
}