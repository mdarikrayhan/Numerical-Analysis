//write a c/c++ program to compute absolute error relative error and percentage error?
#include <iostream>
using namespace std;
int main()
{
    double relative_error = 0, absolute_error = 0,percentage_error=0, exact_value = 0, approximate_value = 0;
    cout << "Enter the exact value: ";
    cin >> exact_value;
    cout << "Enter the approximate value: ";
    cin >> approximate_value;
    absolute_error = abs(exact_value - approximate_value);
    relative_error = absolute_error / exact_value;
    percentage_error = relative_error * 100;
    cout << "The absolute error is: " << absolute_error << endl;
    cout << "The relative error is: " << relative_error << endl;
    cout << "The percentage error is: " << percentage_error << endl;
    return 0;
}