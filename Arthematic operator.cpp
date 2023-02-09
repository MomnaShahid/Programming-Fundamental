#include <iostream>
using namespace std;
int main()
{ int x,y;
int add,subtract,divide,modulus;
string Name="Momna Shahid \n";
string Roll="bsf2205759 \n";
string id="momnashahid709@gmail.com \n";
//print your name
cout<<Name;
//print your roll number
cout<<Roll;
//print your email address
cout<<id;
// enter value of x and press enter
cout<<"enter the value:";
cin>>x;
// enter value of yand press enter
cout<<"enter the value:";
cin>>y;
add= x+y;
// print sum of two numbers
cout<<"sum="<<x+y<<endl ;
subtract= x-y;
// print subtract of two numbers
cout<<"subtract="<<x-y <<endl ;
divide=x/y;
// print division of two numbers
cout<<"divide="<<x/y <<endl;
modulus=x%y;
// print modulus of two numbers
cout<<"modulus="<<x%y;
return 0;
}
