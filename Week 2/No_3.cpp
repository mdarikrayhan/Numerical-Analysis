#include <iostream>
#include <iomanip>
#include <math.h>
#define f(x) (4*(1/(exp(x)))*sin(x))-1
using namespace std;

int main()
{
    float a=0, b=0.5, x, fa, fb, f, error = 0.005;
    int step = 1;
    cout << setprecision(6) << fixed;
    fa = f(a);
    fb = f(b);
    if (fa * fb > 0.0)
    {
        cout << "Incorrect Initial Guesses." << endl;
        return 0;
    }
    cout << "******************************************************************" << endl;
    cout << "                         Bisection Method                         " << endl;
    cout << "******************************************************************" << endl;
    cout << "Step      "
         << "a               "
         << "b               "
         << "x               "
         << "f(x)" << endl
         << endl;
    do
    {
        x = (a + b) / 2;
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
        step = step + 1;
    } while (fabs(f) > error);

    cout << endl
         << "Root is: " << x << endl;

    return 0;
}