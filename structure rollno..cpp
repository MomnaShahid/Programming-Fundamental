#include <iostream>
using namespace std;
struct list
{int rollno;
int mark [5];
float gpa;
char grade;
};
int main ()
{list s[3];
int i,j,m;
for(i=0;i<=3;i++)
{
cout<<"enter roll number:";
cin>>s[i].rollno;
for(j=0;j<=5;j++)
{cout<<"marks:";
cin>>s[i].mark[j];
}
cout<<"enter gpa:";
cin>>s[i].gpa;
cout<<"enter grade:";
cin>>s[i].grade;
}
cout<<"DISPLAY RESULT";
for(i=0;i<=3;i++)
{cout<<"roll number:";
cout<<s[i].rollno<<endl;
for(j=0;j<=4;j++)
{cout<<"marks:";
cout<<s[i].mark[j]<<endl;
}
cout<<"gpa:";
cout<<s[i].gpa<<endl;
cout<<"grade:";
cout<<s[i].grade<<endl;
}
cout<<endl;
cout<<"enter the searching rollno.";
cin>>m;
for(i=0;i<=3;i++)
{

if(m==s[i].rollno)
{cout<<"Roll no."<<s[i].rollno;
for(j=0;j<=4;j++)
cout<<"marks:"<<s[i].mark[j]<<endl;
cout<<"gpa:"<<s[i].gpa<<endl;
cout<<"Grade:"<<s[i].grade<<endl;}
}
}
