/* C++ program to find roots of a quadratic equation */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the equation: ";
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
    if (d >= 0)
    {
        cout << "Roots are : " << (double)(-b + sqrt_val) / (2 * a) << " "
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else{
        cout<<"Solution not possible"<<endl;
    }
    return 0;
}
