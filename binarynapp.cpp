#include<iostream>
#include<math.h>
using namespace std;
int binconvert(int );
int deconvert(int m);
int main()
{
	int n,b,d,m;
	cout<<"enter a number you want to find the binary equivalent of ";
	cin>>n;
	b=binconvert(n);
	cout<<"the binary equivalent of the given number is "<<b<<endl;
	
	cout<<"enter the binary equivalent ";
	cin>>m;
	d=deconvert(m);
	cout<<"the decimal equivalent is "<<d<<endl;
	return 0;
}
int binconvert(int n)
{
	int ans=0,i=0;
	while(n!=0)
	{
		int bit=n&1;
		n=n>>1;
		ans=(bit*pow(10,i))+ans;
		i++;
	}
	return ans;
}
int deconvert(int m)
{
	int i=0,ans=0,digit;
	while(m!=0)
	{
		digit=m%10;
		if(digit==1)
		ans=pow(2,i)+ans;
	i++;
	m=m/10;
	}
	return ans;
}
