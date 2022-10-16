#include <iostream>
#include "Fraction.h"

int Fraction::GetNumerator() const { return numerator; }
int Fraction::GetDenominator() const { return denominator; }
void Fraction::SetNumerator(int numerator) { this->numerator = numerator; }
void Fraction::SetDenominator(int denominator)
{
    if (!denominator)
        this->denominator = denominator;
}

void Fraction::Show() const
{
    std::cout << "[" << numerator << "/" << denominator << "]";
}

Fraction Fraction::Add(const Fraction& f)
{
    Fraction fresult;
    fresult.numerator = this->numerator * f.denominator + this->denominator * f.numerator;
    fresult.denominator = this->denominator * f.denominator;
    return fresult;
}

Fraction Fraction::Del(Fraction f)
{
    Fraction fresult;
    fresult.numerator = this->numerator * f.denominator - this->denominator * f.numerator;
    fresult.denominator = this->denominator * f.denominator;
    return fresult;
}

Fraction Fraction::Mult(Fraction f)
{
    Fraction fresult;
    fresult.numerator = this->numerator * f.numerator;
    fresult.denominator = this->denominator * f.denominator;
    return fresult;
}

Fraction Fraction::Div(Fraction f)
{
    Fraction fresult;
    fresult.numerator = this->numerator * f.denominator;
    fresult.denominator = this->denominator * f.numerator;
    return fresult;
}

Fraction Fraction::operator-()
{
    this->numerator = -this->numerator;
    return *this;
}

bool Fraction::operator!()
{
    return !this->numerator;
}

double Fraction::operator+()
{
    return (double)this->numerator / this->denominator;
}

Fraction Fraction::operator++()
{
    this->numerator += this->denominator;
    return *this;
}

Fraction Fraction::operator++(int)
{
    Fraction copy(this->numerator, this->denominator);
    ++(*this);
    return copy;
}

Fraction Fraction::operator+=(const Fraction& f)
{
    *this = *this + f;
    return *this;
}

Fraction operator+ (Fraction f1, Fraction f2)
{
    Fraction fresult;
    fresult.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
    fresult.denominator = f1.denominator * f2.denominator;
    return fresult;
}

Fraction operator+ (Fraction f, int n)
{
    Fraction fresult(1, f.denominator);
    fresult.numerator = f.numerator + f.denominator * n;
    return fresult;
}

Fraction operator+ (int n, Fraction f)
{
    return f + n;
}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    out << "[" << f.numerator << "/" << f.denominator << "]";
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{
    in >> f.numerator;
    in >> f.denominator;
    return in;
}

bool operator<(const Fraction& f1, const Fraction& f2)
{
    return f1.numerator * f2.denominator < f1.denominator* f2.numerator;
}

bool operator>(const Fraction& f1, const Fraction& f2)
{
    return f1.numerator * f2.denominator > f1.denominator* f2.numerator;
}

bool operator<=(const Fraction& f1, const Fraction& f2)
{
    return !(f1 > f2);
}

bool operator>=(const Fraction& f1, const Fraction& f2)
{
    return !(f1 < f2);
}

bool operator==(const Fraction& f1, const Fraction& f2)
{
    return f1.numerator * f2.denominator == f1.denominator* f2.numerator;
}

bool operator!=(const Fraction& f1, const Fraction& f2)
{
    return !(f1 == f2);
}



