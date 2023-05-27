#include <iostream>
#include <math.h>
using namespace std;
int main ()
{int n,f=0,i=0,arr[32],d;
cout<<"enter the binary number:";
cin>>n;
cout<<"binary to decimal:";
while (n!=0){
d=n%10;
arr[i]=d;
f=f+d*pow(2,i);
n=n/10;
i++;
}
cout<<f;
return 0;
}
