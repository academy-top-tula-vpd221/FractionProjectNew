#include <iostream>
#pragma once
class Fraction
{
	int numerator;
	int denominator;
public:
    Fraction(int numerator = 0, int denominator = 1) :
        numerator{ numerator }, denominator{ denominator }
    {
        if (!denominator)
            this->denominator = 1;
    }
    int GetNumerator() const;
    int GetDenominator() const;
    void SetNumerator(int numerator);
    void SetDenominator(int denominator);
    
    void Show() const;
    Fraction Add(const Fraction&);
    Fraction Del(Fraction);
    Fraction Mult(Fraction);
    Fraction Div(Fraction);
    friend Fraction operator+ (Fraction, Fraction);
    friend Fraction operator+ (Fraction, int);
    friend Fraction operator+ (int, Fraction);

    Fraction operator-();
    bool operator!();

    double operator+();

    Fraction operator++();
    Fraction operator++(int);

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
    friend std::istream& operator>>(std::istream& in, Fraction& f);

    friend bool operator<(const Fraction& f1, const Fraction& f2);
    friend bool operator>(const Fraction& f1, const Fraction& f2);
    friend bool operator<=(const Fraction& f1, const Fraction& f2);
    friend bool operator>=(const Fraction& f1, const Fraction& f2);
    friend bool operator==(const Fraction& f1, const Fraction& f2);
    friend bool operator!=(const Fraction& f1, const Fraction& f2);

    Fraction operator+=(const Fraction& f);
};

