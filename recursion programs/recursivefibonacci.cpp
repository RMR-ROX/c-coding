#include<iostream>
int fib(int );
using namespace std;
int main()
{
	int n;
	cout<<"enter the fibonacci term you want to find out ";
	cin>>n;
	
	cout<<"the "<<n<<"th fibonacci is "<<fib(n);
	return 0;
	
}

int fib(int n)
{
	//base case
	if(n==0)
	{
		return 0;
	}
	
	if(n==1)
	{
		return 1;
	}
	
	else
	{	
		return fib(n-1)+fib(n-2);
	}
	
}


