#include <iostream>
using namespace std;
int main()
{//declare the variable
int x=2;
do
/*code to be executed once before applying condition.if condition is false ,code to be executed oe time */
{cout<<x<<endl;
++x;
}
//if condition is true,code executed until condition is false
while(x<=7);
return 0;
}
