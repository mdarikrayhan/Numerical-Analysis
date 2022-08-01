#include <iostream>
#include <iomanip>
#include <math.h>
#define f(x) (x * x * x) - (2 * x) - 5
using namespace std;

int main()
{
    float a,b,x, fa, fb, f, error, low, high;
    int step = 1;
    cout << setprecision(6) << fixed;

    cout << "Enter lower guess : ";
    cin >> low;
    cout << "Enter higher guess : ";
    cin >> high;

    int min = INT32_MAX;
    for (int i = low; i <= high; i++)
    {
        for (int j = low; j <= high; j++)
        {
            if (i != j)
            {
                fa = f(i);
                fb = f(j);
                int w = abs(i - j);
                if (fa*fb < 0 && w < min)
                {
                    min = w;
                    a = i;
                    b = j;
                }
            }
        }
    }

    cout << "Enter the value of e: ";
    cin >> error;

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

    cout << endl<<
         setprecision(3)<< "Root is: " << x << endl;

    return 0;
}