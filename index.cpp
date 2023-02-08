// Program to carry out numerical integration of a function using Simpson's method.

// Simpson's Rule is a formula that has been used to calculate the estimated value of a definite integral.

#include <iostream>
#include <math.h>
using namespace std;

#define func(x) (x * x + 2 * x  + 7 ) / (x * x + 4)             // taking our required function which has a quadratic function both in numerator and in the denominator

signed main()
{

    float l;
    cout << "Enter the lower limit"
         << " ";        // taking lower limit as input
    cin >> l;

    float u;
    cout << "Enter the upper limit"
         << " ";        // taking upper limit as input
    cin >> u;

    int n;
    cout << "Enter the number of intervals"
         << " ";        // taking the no. of intervals as input
    cin >> n;

    float h = (u - l) / n;

    float sum1 = 0, sum2 = 0;
    float result;

    int p = 1;

    while (p < n)
    {

        float s = l + p * h;

        if (p % 2 == 0)                                           // performing the required calculations
        {

            sum1 += 2 * func(s);
        }
        else
        {
            sum2 += 4 * func(s);
        }

        p++;
    }

    result = h / 3 * (func(l) + func(u) + sum1 + sum2);           // applying the Simpson's rule formula

    cout << "The approx. value of the given Simpson's rule ="
         << " " << result << "\n";                                // getting our resultant value

    return 0;
}