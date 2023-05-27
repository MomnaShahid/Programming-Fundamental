#include <iostream>
using namespace std;
int main ()
{int n1,n2,temp,i,n,d,sum=0;
cout<<"enter the number";
cin>>n1;
cout<<"enter tne second number";
cin>>n2;
if (n2<n1)
{temp=n1;
n1=n2;
n2=temp;}
for(i=n1+1;i<n2;i++)
{
n=i;
sum=0;
while (n!=0)
{d=n%10;
sum=sum+(d*d*d);
n=n/10;
}
if(sum==i)
cout<<i<<" ";}
return 0;

}
