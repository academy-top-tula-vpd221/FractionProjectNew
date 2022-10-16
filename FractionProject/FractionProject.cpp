#include <iostream>
#include "Fraction.h"


int main()
{
    Fraction f1(4, 5);
    Fraction f2(3, 7);

    f1.Show();
    std::cout << " + ";
    f2.Show();
    std::cout << " = ";
    f1.Add(f2).Show();
    std::cout << "\n";


    std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << "\n";
    // [4/5] + [3/7] = [43/35]

    int a;
    float b;
    Fraction f3;

    std::cout << "input int, Fraction, double: ";
    std::cin >> a >> f3 >> b;

    std::cout << "a = " << a << "\n";
    std::cout << "f3 = " << f3 << "\n";
    std::cout << "b = " << b << "\n";


    return 0;
}
