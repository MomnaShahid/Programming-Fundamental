#include <iostream>
using namespace std;

int main() 
{//declare the variables
string rollno,name;
int p_marks,c_marks,m_marks,e_marks,cs_marks;
int obtained;
int pre;
int total=500;
int percentage;
	cout<<"\nRoll number of student : ";
	//enter the Roll no.
	cin>>rollno;
	cout<<"\nName of student : ";
	//enter your name
	cin>>name;
	cout<<"\nMarks in Physics : ";
	//enter the marks of physics and press enter
	cin>>p_marks;
	cout<<"\nMarks in Chemistry : ";
	//enter the marks of physics and press enter
	cin>>c_marks;
	cout<<"\nMarks in Maths : ";
	//enter the marks of physics and press enter
	cin>>m_marks;
	cout<<"\nMarks in English : ";
	//enter the marks of physics and press enter
	cin>>e_marks;
	cout<<"\nMarks in Computer Science :";
	//enter the marks of physics and press enter
	cin>>cs_marks;
obtained=(p_marks+c_marks+m_marks+e_marks+cs_marks);
//print sum of obtained marks
	cout<<"obtained marks="<<obtained<<endl;
	cout<<"total marks="<<total<<endl;
	pre=obtained*100;
	percentage=pre/total;
	//print percentage of marls
	cout<<"percentage="<<percentage;
	if(percentage>=90)
	//print the grade 
	{cout<<"\nGrade=\"A\"";
	//display A if Percentage greater or equal to 90
	}
	else if (percentage>=80)
	{cout<<"\nGrade=\"B\"";
	//display B if Percentage greater or equal to 80
	else if(percentage>=70)
	{cout<<"\nGrade=\"C\"";
	//display C if Percentage greater or equal to 70
	}
	else if(percentage>=60)
	{cout<<"\nGrade=\"D\"";
	//display D if Percentage greater or equal to 60
	}
	else if(percentage>=50)
	{cout<<"\nGrade=\"E\"";
	//display E if Percentage greater or equal to 50
	}
	else 
	{cout<<"\nGrade=\"F\"";
	//display F if above conditions is not satisfied
	}
return 0;
}
