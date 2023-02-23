#include <iostream>
using namespace std;
int main ()
{//declare the variables
int x,y,z;
//take values from the user
cout<<"enter the value: ";
cin>>x;
cout<<"enter the value: ";
cin>>y;
// Check if the sum is even or odd
if ((x+y)%2==0)
{cout<<x+y<<" is even "<<endl;
}
else{
	cout<<x+y<<" is odd"<<endl;
}
// Print the table of the sum multiplied by numbers 1 to 10
cout<<"Table of "<<x+y<<endl;
for(z=1;z<=10;z++)
{cout<<x+y<<"*"<<z<<"="<<(x+y)*z<<endl;
}
return 0;
}
