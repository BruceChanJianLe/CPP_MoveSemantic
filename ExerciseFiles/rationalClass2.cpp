#include "rationalClass2.hpp"


void message(const string & s)
{
    cout << s << endl << flush;
}

Rational::Rational()
    {
        reset();
        message("default ctor");
    }


Rational::Rational(const int & numerator)
    : _n(numerator), _d (1)
    {
        message("int ctor");
    }


Rational::Rational(const int & numerator, const int & denominator)
    : _n(numerator), _d(denominator)
    {
        message("int, int ctor");
    }


Rational::Rational(const Rational & other)
    : _n(other._n), _d(other._d)
    {
        message("copy ctor");
    }


Rational::Rational(Rational && rhs) noexcept
{
    _n = std::move(rhs._n);
    _d = std::move(rhs._d);
    // Once rhs is moved, we need to set rhs to a known state instead of leaving it empty
    rhs.reset();
    message("move ctor");
}


Rational::~Rational()
{
    message("dtor");
}


void Rational::reset()
{
    _n = 0;
    _d = 1;
}


Rational & Rational::operator = (const Rational & rhs)
{
    message("assignment");
    if(this != &rhs)
    {
        _n = rhs.numerator();
        _d = rhs.denominator();
    }
    return * this;
}


Rational & Rational::operator = (Rational && rhs) noexcept
{
    message("move assignment");
    if(this != &rhs)
    {
        _n = std::move(rhs.numerator());
        _d = std::move(rhs.denominator());
        rhs.reset();
    }
    return * this;
}


Rational Rational::operator + (const Rational & rhs) const
{
    return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}


Rational Rational::operator - (const Rational & rhs) const
{
    return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}


Rational Rational::operator * (const Rational & rhs) const
{
    return Rational(_n * rhs._d, _d * rhs._n);
}


Rational Rational::operator / (const Rational & rhs) const
{
    return Rational(_n * rhs._d, _d * rhs._n);
}

Rational::operator std::string () const
{
    return string();
} 


std::string Rational::string() const
{
    return std::string(c_str());
}

std::string Rational::c_str() const
{
    return to_string(_n) + "/" + to_string(_d);
}