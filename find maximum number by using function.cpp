#include <iostream>
using namespace std;
void max (int a,int b);
int main ()
{int x,y;
cout<<"Enter the number:";
cin>>x>>y;
max(x,y);
return 0;
}
void max (int a,int b)
{if(a>b)
cout<<"maximum number is "<<a;
else
cout<<"maximum number is "<<b;
}
