#include <iostream>
using namespace std;
void primecomposition (int n);
int main ()
{int a;
cout<<"Enter the number:";
cin>>a;
primecomposition (a);
return 0;
}
void primecomposition (int n)
{int i,c=0;
for (i=2;i<=n/2;i++)
{if(n%i==0)
c=1;
break;
}
if (c==0)
cout<<n<<" is prime number";
else 
cout<<n<<" is composition number";
}


