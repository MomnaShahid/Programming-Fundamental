#include <iostream>
using namespace std;

int main() 
{int time = 24;
if (time <10)
{cout<<"Good Morning";
// block of code to be executed if condition is true
}
else if(time<20)
{cout<<"Good Noon";
// block of code to be executed if condition1 is false and condition2 is true
}
else
{cout<<"Good Evening";
// block of code to be executed if condition 1and 2 is false.
}
//outputs "Good Evening"
return 0;
}
