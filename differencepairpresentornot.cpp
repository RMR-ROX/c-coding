#include<iostream>
#include<math.h>
using namespace std;
bool isdifference_present(int arr[],int n,int x);
int main()
{
	
	int x,n;
	cout<<"enter size of a sorted array ";
	cin>>n;
	int *arr=new int[n];
	cout<<"enter the array elements ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to match the difference with ";
	cin>>x;
	if(isdifference_present( arr, n, x))
	{
		cout<<"true ";	
	}
	else
	{
		cout<<"false ";
	}
	delete[] arr;
	return 0;
}
bool isdifference_present(int arr[],int n,int x)
{
	int i=0,j=1;
	while(i<n && j<n)
	{
		if(i!=j && arr[j]-arr[i] == x)
		return true;
		
		if(arr[j]-arr[i] < x)
		j++;
		
		else if(arr[j]-arr[i]>x)
		i++;
		
	}
	return false;
	
}
