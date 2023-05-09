#include <iostream>
using namespace std;
int factorial (int n);
int main ()
{int x;
cout<<"enter the number:";
cin>>x;
cout<<factorial (x);
return 0;
}
int factorial (int n)
{int f=1,c=1;
while(c<=n)
{f=f*c;
c++;
}
cout<<"Factorial of "<<n<<"! :";
return f;
}
