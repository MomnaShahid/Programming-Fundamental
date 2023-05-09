#include <iostream>
using namespace std;
void temconvert (int f);
int main ()
{int n;
cout<<"convert Fahrenheit to Celsius :";
cin>>n;
temconvert(n);
return 0;
}
void temconvert (int f)
{int c;
c=(f-32)*5/9;
cout<<c;
}
