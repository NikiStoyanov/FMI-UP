
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);

    if (a == 0)
    {
        return b;
    }

    return gcd(b % a, a);
}

int lcm(const int a, const int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

    return abs(a * b) / gcd(a, b);
}

void simplifyFraction(int& numerator, int& denominator)
{
    int greatestCommonDivisor = gcd(numerator, denominator);

    if (greatestCommonDivisor != 1)
    {
        numerator /= greatestCommonDivisor;
        denominator /= greatestCommonDivisor;
    }
}


int main()
{
    int numerator, denominator;
    cin >> numerator >> denominator;

    simplifyFraction(numerator, denominator);

    cout << numerator << " " << denominator << endl;
}
