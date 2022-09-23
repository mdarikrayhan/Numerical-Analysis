#include<bits/stdc++.h>
#define f(x) x-(1/2)-sin(x)
#define g(x) (sin(x)+(1/2))
using namespace std;
int main()
{
	int step = 1;
	float x0, x1, e = 0.0001, result = 0;
	cout << setprecision(4) << fixed;
	cout << "Enter Initial guess: ";
	cin >> x0;
	cout << "*******************************************************" << endl;
	cout << "             Fixed Point Iteration Method              " << endl;
	cout << "*******************************************************" << endl;
	do
	{
		x1 = g(x0);
		cout << "Step " << step << ":\t x1 = " << setw(10) << x1 << " and g(x1) = " << setw(10) << g(x1) << endl;
		step = step + 1;

		float old = x0;
		x0 = x1;
		result = fabs(g(x1) - g(old));

	} while (result > e);

	cout << "\nRoot is " << x1;

	return 0;
}