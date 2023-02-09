#include<iostream>
using namespace std;
int main()
{int day;
cout<<"Enter the day number=";
//take day number and press enter
cin>>day;
switch (day)
{
case 1:
	//block quote to be execute,case is satisfied
	cout<<"Monday";
	break;
case 2:
	//block quote to be execute,case is satisfied
	cout<<"Tuesday";
	break;
case 3:
	//block quote to be execute,case is satisfied
	cout<<"Wednesday";
	break;
case 4:
	//block quote to be execute,case is satisfied
	cout<<"Thursday";
	break;
case 5:
	//block quote to be execute,case is satisfied
	cout<<"Friday";
	break;
case 6:
	//block quote to be execute,case is satisfied
	cout<<"Saturday";
	break;
case 7:
	//block quote to be execute,case is satisfied
	cout<<"Sunday";
	break;
default:
	//block quote to be execute,case is satisfied
cout<<"invalid"	;
}
return 0;
}
