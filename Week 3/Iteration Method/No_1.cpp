#include <bits/stdc++.h>
#define f(x) 1 + (x * x) - (x * x * x)
#define g(x) cbrt(1+(x*x))
using namespace std;
int main()
{
	int step = 1;
	float x0, x1, e = 0.001, result;
	cout << setprecision(3) << fixed;
	cout << "Enter Initial guess: ";
	cin >> x0;
	cout << "*******************************************************" << endl;
	cout << "             Fixed Point Iteration Method              " << endl;
	cout << "*******************************************************" << endl;
	do
	{
		x1 = g(x0);
		cout << "Step " << step << ":\t x1 = " << setw(10) << x1 << " and f(x1) = " << setw(10) << f(x1) << endl;
		step = step + 1;

		float old = x0;
		x0 = x1;
		result = fabs(g(x1) - g(old));

	} while (result > e);

	cout << "\nRoot is " << x1;

	return 0;
}
