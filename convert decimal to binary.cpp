 #include <iostream>
using namespace std;
int main ()
{int a,n,d,i;
cout<<"1. convert decimal to binary"<<endl;
cout<<"2. convert decimal to octal"<<endl;
cout<<"3. convert decimal to hexadecimal"<<endl;
cout<<"select the number from 1 to 3:";
cin>>a;
int arr[32];
{
switch (a)
{case 1:
	{
		cout<<"enter the number:";
		cin>>n;
		while(n!=0)
		{d=n%2;
		arr[i]=d;
		n=n/2;
		i++;
		}
		break;
	}
		case 2:
		{
		cout<<"enter the number:";
		cin>>n;
		while(n!=0)
		{d=n%8;
			arr[i]=d;
		n=n/8;
		i++;
		}
		break;}
		case 3:
		{
		cout<<"enter the number:";
		cin>>n;
		while(n!=0)
		{d=n%16;
		arr[i]=d;
		if (d>10)
		cout<<char('A'+d-10);
	 n=n/16;
		i++;
		}
	break;}
		default:
			{cout<<"invalid";
			}
		}
	for (int j=i-1;j>=0;j--)
{
			cout<<arr[j];
}

}

return 0;
}

