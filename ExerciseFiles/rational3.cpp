#include <iostream>
#include <string>
#include "rationalClass3.hpp"

using namespace std;


int main(int argc, char ** argv)
{
    Rational a(5, 3);
    Rational b(9, 5);

    b = a;

    cout << "a is: " << a.c_str() << endl;
    cout << "b is: " << b.c_str() << endl;

    return 0;
}