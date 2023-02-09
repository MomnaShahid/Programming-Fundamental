/*Write a program in which user enter the marks and display grades:
        Marks            Grade
        >=90              A+
	    89-80             A
		79-70             B
		69-60             C
		59-50             D
		49-45             E
		below 45          F
		(Using if else if statement) */
		
#include <iostream>
using namespace std;
//main function
int main()
{int marks;
string Name="Momna Shahid \n";
//print your name
cout<<Name;
string Rollno="bsf2205759 \n";
//print your roll no.
cout<<Rollno;
string  id="momnashahid709@gmail.com\a \n";
//print your id
cout<<id;
cout<<"Enter your Marks=";
//user enter the marks 
cin>>marks;
if (marks>=90)
{cout<<"Grade = \"A+\"";
//grade A+ dispalay if condition1 is true
}
else if (marks>=80)
{cout<<"Grade = \"A\"";
//grade A display if condition1 is false and condition 2 is true
}
else if (marks>=70)
{cout<<"Grade = \"B\"";
//grade B display if condition 1,2 is false and condition 3 is true
}
else if (marks>=60)
{cout<<"Grade = \"C\"";
//grade C display if condition 1,2,3 is false and condition 4 is true
}
else if (marks>=50)
{cout<<"Grade = \"D\"";
//grade D display if condition 1,2,3,4 is false and condition 4 is true
}
else if (marks>=45)
{cout<<"Grade = \"E\"";//grade E display if above conditions is false and this condition is satisfied
}
else 
{cout<<"Grade = \"F\"";//grade F display if all above condition is false
}
//close main function
return 0;
}
