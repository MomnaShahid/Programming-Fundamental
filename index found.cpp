#include <iostream>
using namespace std;
int main ()
{int a[6]={1,3,4,6,7,8};
int n,i,loc=-1;
cout<<"enter the number:";
cin>>n;
for(i=0;i<6;i++)
if(a[i]==n)
loc=i;
if(loc==-1)
cout<<n<<" is not found on index "<<endl;
else
cout<<n<<" is found on index"<<loc<<endl;
}
