#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int a,b,c;

	cout<<"Enter value for A = ";
	cin>>a;
	cout<<"Enter value for B = ";
	cin>>b;

	try
	{
		
	if(b!=0)
	{
		c = a/b;
		cout<<c;
	}
	else
	{
		throw 1;
		;
	}
	}
catch(int a)
{
	cout<<"can not divide by zero";
}
}
