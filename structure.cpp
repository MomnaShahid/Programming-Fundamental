#include <iostream>
using namespace std;
struct list
{int rollno [];
int mark [5][5];
float gpa[];
char grade[];
};
int main ()
{
list s;
int i,j,m;
for(i=0;i<3;i++)
{
cout<<"enter roll number:";
cin>>s.rollno[i];
for(j=0;j<5;j++)
{cout<<"marks:";
cin>>s.mark[i][j];
}
cout<<"enter gpa:";
cin>>s.gpa[i];
cout<<"enter grade:";
cin>>s.grade[i];
}
cout<<"DISPLAY RESULT";
{cout<<"roll number:";
cout<<s.rollno[i]<<endl;
for(i=0;i<=3;i++)
for(j=0;j<4;j++)
{cout<<"marks:"<<s.mark[i][j];
cout<<s.mark[i][j]<<endl;
}
cout<<"gpa:";
cout<<s.gpa[i]<<endl;
cout<<"grade:";
cout<<s.grade[i]<<endl;
}
cout<<"enter the searching rollno.";
cin>>m;
for(i=0;i<3;i++)
{

if(m==s.rollno[i])
{cout<<"Roll no."<<s.rollno[i];
for(j=0;j<4;j++)
cout<<"marks:"<<s.mark[i][j]<<endl;
cout<<"gpa:"<<s.gpa[i]<<endl;
cout<<"Grade:"<<s.grade[i]<<endl;}
}
}
