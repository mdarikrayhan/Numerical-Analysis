// Write a c/c++  program to print the prime number up to a given range?
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1, num2;
    int fnd = 0, ctr = 0;
    cout << "Enter the range: ";
    cin >> num1 >> num2;
    cout<<"The prime numbers are : "<<endl;
    for (int i = num1; i <= num2; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                ctr++;
        }
        if (ctr == 0 && i != 1)
        {
            fnd++;
            cout << i << " ";
        }
        ctr = 0;
    }
    return 0;
}
