#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void saydigits(int n);
int main()
{
	int n;
	cout<<"enter any number ";
	cin>>n;
	saydigits(n);
	return 0;
	
}
void saydigits(int n)
{
	string str[10]={"zero","one ","two ","three ","four "
	                ,"five ","six ","seven ","eight ","nine "};
	
	//base case
	if(n==0)
	{
		return;
	}
	
	//recursive relation
	int r=n%10;
	n=n/10;
	saydigits(n);
	cout<<str[r]<<" ";
	
}

