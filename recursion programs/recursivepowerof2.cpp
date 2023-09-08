#include<iostream>
using namespace std;
int powerof2(int n);

int main()
{
	int n;
	cout<<"enter the power ";
	cin>>n;
	cout<<"the power of 2 to the power "<<n<<" is "<<powerof2(n);
	return 0;
	
}

int powerof2(int n)
{
	//base case
	if(n==0)
	return 1;
	
	else
	return 2*powerof2(n-1);
}
