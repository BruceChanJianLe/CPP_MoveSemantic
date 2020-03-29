#ifndef _RATIONALCLASS_H_
#define _RATIONALCLASS_H_

#include <iostream>
#include <string>

using namespace std;


void message(const string & s);


class Rational
{
private:
    int _n = 0;
    int _d = 1;
public:
    Rational();
    Rational(const int & numerator);
    Rational(const int & numerator, const int & denominator);
    Rational(const Rational & other);
    ~Rational();
    void reset();
    inline int numerator() const { return _n; }
    inline int denominator() const { return _d; }
    Rational & operator = (const Rational & other);
    Rational operator + (const Rational &) const;
    Rational operator - (const Rational &) const;
    Rational operator * (const Rational &) const;
    Rational operator / (const Rational &) const;
    operator std::string () const;
    std::string string() const;
    std::string c_str() const;
};

#endif