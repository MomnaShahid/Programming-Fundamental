#include <iostream>
using namespace std;

int main() 
{string rollno,name;
int p_marks,c_marks,m_marks,e_marks,cs_marks;
int obtained;
int total=50;
int pro;
int x, y;
y=4;
x=2;
int full;
int mul=x*100;
cout<<mul;
full= mul/x;
cout<<full;
int percentage;
pro=obtained*100;
percentage=pro/total;
	cout<<"\nRoll number of student : ";
	cin>>rollno;
	cout<<"\nName of student : ";
	cin>>name;
	cout<<"\nMarks in Physics : ";
	cin>>p_marks;
	cout<<"\nMarks in Chemistry : ";
	cin>>c_marks;
	cout<<"\nMarks in Maths : ";
	cin>>m_marks;
	cout<<"\nMarks in English : ";
	cin>>e_marks;
	cout<<"\nMarks in Computer Science :";
	cin>>cs_marks;
obtained=(p_marks+c_marks+m_marks+e_marks+cs_marks);
	cout<<"obtained marks="<<obtained<<endl;
	cout<<"total marks="<<total<<endl;
	cout<<"percentage="<<percentage;
	

return 0;
}
