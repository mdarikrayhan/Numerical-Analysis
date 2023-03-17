#include <bits/stdc++.h>
using namespace std;

float fo(float p, int n)
{
	float temp = p;
	for (int i = 1; i < n; i++)
		temp = temp * (p - i);
	return temp;
}

int fact(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

int main()
{
	float x[20], y[20][20];
	int i, j, n;
	cout << "Enter number of data:";
	cin >> n;
	cout << "Enter data:";
	for (i = 0; i < n; i++)
	{
		cout << "X= ";
		cin >> x[i];
		cout << "Y= ";
		cin >> y[i][0];
	}

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
		}
	}
	cout << " Difference table" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << x[i]
			 << "\t";
		for (int j = 0; j < n - i; j++)
			cout << setw(4) << y[i][j]
				 << "\t";
		cout << endl;
	}

	float value;
	cout << "Value of interpolate: ";
	cin >> value;

	float sum = y[0][0];
	float p = (value - x[0]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++)
	{
		sum = sum + (fo(p, i) * y[0][i]) /
						fact(i);
	}

	cout << "\n Value at " << value << " is "
		 << sum << endl;
	return 0;
}
