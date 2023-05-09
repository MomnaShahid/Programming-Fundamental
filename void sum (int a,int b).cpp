#include <iostream>
using namespace std;
void sum (int a,int b);
int main ()
{int x,y;
cout<<"Enter the two numbers:";
cin>>x>>y;
sum(x,y);
return 0;
}
void sum (int a,int b)
{cout<<"sum of two numbers:";
cout<<a+b;
}
