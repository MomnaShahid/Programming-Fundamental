#include <iostream>
using namespace std;
int main ()
{int j,i;
char alp='A';
for (i=1;i<=5;i++)
{for (j=1;j<=i;j++)
{
cout<<alp;
}
alp++;
cout<<endl;
}
return 0;
}
