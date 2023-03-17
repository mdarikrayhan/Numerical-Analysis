#include<iostream>
#include<math.h>
#define f(x) 1/(1+x)

using namespace std;
int main()
{
 float lower, upper, integration=0.0, h, k;
 int i, subInterval;


 cout<<"Enter lower limit of integration: ";
 cin>>lower;
 cout<<"Enter upper limit of integration: ";
 cin>>upper;
 cout<<"Enter number of h: ";
 cin>>h;
 subInterval = (upper - lower)/h;

float arr[subInterval+1];
float x=lower;
for(int i=0;i<subInterval+1;i++){
    arr[i]=f(x);
    x+=h;
}

integration=(h/2)*(arr[0]+arr[subInterval]);
for(int i=1;i<subInterval;i++){

        integration+=((h/2)*2*(arr[i]));

}


cout<< endl <<"Required value of integration is: "<< integration;

 return 0;
}