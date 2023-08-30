#include<iostream>
using namespace std;
int bitwisecomplement(int n);
int main()
{
	int n,ans;
	cout<<"enter the number you want to print the complement of ";
	cin>>n;
	ans=bitwisecomplement(n);
	cout<<ans;
	return 0;
}
int bitwisecomplement(int n)
{
/*	 5 --- 101
	       010----2
	so the complement of 5 is 2 
	
	similarly 7---111
	              000---0 
	so the complement of 7 is 0 */
	
	int mask=0;
	if(n==0)
	return 1;
	
while(n!=0)	{
		mask=(mask << 1) | 1;
		n>>1;
	}
	int ans=(~n) & mask;
	return ans;
}

