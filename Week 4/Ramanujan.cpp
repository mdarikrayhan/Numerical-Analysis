/***************************************************/
/*            Author : Md. Arik Rayhan             */
/*        Github : github.com/mdarikrayhan         */
/***************************************************/
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
int main() {
float a1=-1,a2=1,a3=0,a4=0,a5=0,a6=0;
float b1=1;
float b2=(a1*b1);
float b3=(a1*b2)+(a2*b1);
float b4=(a1*b3)+(a2*b2)+(a3*b1);
float b5=(a1*b4)+(a2*b3)+(a3*b2)+(a4*b1);
float b6=(a1*b5)+(a2*b4)+(a3*b3)+(a4*b2)+(a5*b1);

cout<<"The first convergent is : "<<b1/b2<<nl;
cout<<"The second convergent is : "<<b2/b3<<nl;
cout<<"The third convergent is : "<<b3/b4<<nl;
cout<<"The fourth convergent is : "<<b4/b5<<nl;
cout<<"The fifth convergent is : "<<b5/b6<<nl;

return 0;
}