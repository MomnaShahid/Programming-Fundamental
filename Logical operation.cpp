#include <iostream>
//preprosessor directive
using namespace std;
int main()
{int x=5,y=6;
// declare and assign value of two variables x and y
cout<<(x>3&& y<5)<<endl;
//both condition is not satisfied.return 0
cout<<(x>3||y<5)<<endl;
//only one condition is satisfied then print 1
cout<<!(x>3&& y<5)<<endl;
// apply NAND operator.Print 1
cout<<!(x>3&& y<5)<<endl;
// apply NOR operator.it reverse the original output
cout<<!(x>3||y<5)<<endl;
//close the main function
return 0;
}

