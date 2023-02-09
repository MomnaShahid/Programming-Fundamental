#include <iostream>
// preprpsessor directives
using namespace std;
int main()
// main function
{int x=5, y=8; 
//declare value of variable x and y
cout<<(x==y)<<endl;
// print 0 (false) because 5 is not equal to 8
cout<<(x!=y)<<endl;
// print 1 (true) because 5 is not equal to 8
cout<<(x>y)<<endl;
// print 0 (false) because 5 is not greater than 8
cout<<(x<y)<<endl;
// print 1 (true) because 8 is greater than 5
cout<<(x<=y)<<endl;
// print 1 (true) because 8 is greater than 5
cout<<(x>=y);
// print 0 (false) because 5 is not greater or  equal to 8
return 0;
//close the main function
}
