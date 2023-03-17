#include <bits/stdc++.h>
#define f(x) (x-sin(x)-0.5)
#define g(x) (2-2*cos(x))

using namespace std;

int main()
{
    float x0, x1, f0, f1, g0, e=0.001;
    int step = 1;
    cout << setprecision(3) << fixed;

    cout << "Enter initial guess: ";
    cin >> x0;

    g0 = g(x0);
    if (g0 == 0.0)
    {
        cout << "Incorrect initial guess." << endl;
        return 0;
    }

    cout << endl
         << "*****************************************************" << endl;
    cout << "                Newton Raphson Method                " << endl;
    cout << "*****************************************************" << endl;
    do
    {
        g0 = g(x0);
        f0 = f(x0);

        x1 = x0 - f0 / g0;

        cout << "Step -" << step << ":\t x = " << setw(10) << x1 << " and f(x) = " << setw(10) << f(x1) << endl;
        x0 = x1;

        step++;

        f1 = f(x1);

    } while (fabs(f1) > e);

    cout << endl
         << "Root is: " << x1;
    return 0;
}
