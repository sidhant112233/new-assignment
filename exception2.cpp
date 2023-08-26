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
	char solution []= "can not divide by zero";
	try
	{
		
	if(b!=0)
	{
		c = a/b;
		cout<<c;
	}
	else
	{
		throw 10.31;
	}
	}
catch(...)
{
	cout<<solution;
}
}
