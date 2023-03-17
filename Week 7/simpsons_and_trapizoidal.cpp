#include <iostream>
#include <math.h>
#define f(x) 1 / (1 + x)

using namespace std;
int main()
{
    float lower, upper, integration = 0.0, h, k;
    int i, subInterval;

    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of h: ";
    cin >> h;
    subInterval = (upper - lower) / h;

    float arr[subInterval + 1];
    float x = lower;
    for (int i = 0; i < subInterval + 1; i++)
    {
        arr[i] = f(x);
        x += h;
    }
    cout << "Which method you want to try: \n1.Simpsons1/3\n2.Trapizoidal" << endl;
    int choice;
    cin >> choice;
    int p,even,odd;
    if (choice == 1)
    {
        p=3;
        odd=4;
        even=2;
    }
    else if (choice == 2)
    {
        p=2;
        odd=even=2;
    }

        integration = (h / p) * (arr[0] + arr[subInterval]);
        for (int i = 1; i < subInterval; i++)
        {
            if (i % 2 == 1)
            {
                integration += ((h / p) * odd * (arr[i]));
            }
            else
            {
                integration += ((h / p) * even * (arr[i]));
            }
        }
    cout << endl
         << "Required value of integration is: " << integration;

    return 0;
}
