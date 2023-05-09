#include <iostream>
using namespace std;
void evenoddtest (int n);
int main ()
{int a;
cout<<"enter the number:";
cin>>a;
evenoddtest (a);
return 0;
}
void evenoddtest (int n)
{if(n%2==0)
cout<<n<<" is even";
else
cout<<n<<" is odd";
}
