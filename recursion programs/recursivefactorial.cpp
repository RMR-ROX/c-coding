#include<iostream>
using namespace std;
long long factorial(int n);

int main()
{
	int n;
	cout<<"enter the number you want to print the factorial for ";
	cin>>n;
	cout<<"the factorial is "<<factorial(n);
	return 0;
}
long long factorial(int n)
{
	//base case
	if(n==0)
	return 1;
	
	return n*factorial(n-1);
}

