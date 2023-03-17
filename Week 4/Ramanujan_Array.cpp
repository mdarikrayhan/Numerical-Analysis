#include <iostream>
using namespace std;
const char nl = '\n';
int main()
{
    int n=0;
    //cout << "\nEnter the number of convergents you want to display: ";
    cin >> n;
    float a[n]={0}, b[n + 1];
    
    
    
    //cout<<"How many values of a you want to enter: ";
    int total_a;
    cin>>total_a;
    for (int i = 0; i < total_a; i++)
    {
        //cout << "Enter the value of a" << i + 1 << ": ";
        cin >> a[i];
    }
    //calculating the value of b
    b[0]=1;
    for (int i = 1; i <= n; i++)
    {
        b[i]=0;
        for(int j=0,k=i-1;j<i,k>=0;j++,k--){
            b[i]+=(a[k]*b[j]);
        }
    }

    for(int i=0;i<n;i++){
        cout << "The "<< i+1<<"th convergent is : " << b[i] / b[i+1] << nl;
    }
    cout<<nl<<"The result is : "<<b[n-1]/b[n]<<nl;
    return 0;
}