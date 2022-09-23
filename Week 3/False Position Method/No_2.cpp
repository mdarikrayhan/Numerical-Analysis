#include <iostream>
#include <iomanip>
#include <math.h>
#define f(x) (exp(x) * x) - 1
using namespace std;

int main()
{
    float a = 0, b = 1, x, fa, fb, f, error = 0.0005;
    int step = 1;
    cout << setprecision(3) << fixed;
    fa = f(a);
    cout << "******************************************************************" << endl;
    cout << "                         False Position Method                    " << endl;
    cout << "******************************************************************" << endl;
    cout << "Step      "
         << "a               "
         << "b               "
         << "x               "
         << "f(x)" << endl
         << endl;
    do
    {
        fa = f(a);
        fb = f(b);
        x = ((fa * b) - (fb * a)) / (fa - fb);
        f = f(x);

        cout << step << "\t" << setw(10) << a << "\t" << setw(10) << b << "\t" << setw(10) << x << "\t" << setw(10) << f(x) << endl;

        if (fa * f < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
        step++;
    } while (fabs(f) > error);

    cout << endl
         << "Root is: " << x << endl;

    return 0;
}