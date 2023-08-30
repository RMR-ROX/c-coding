#include<iostream>
using namespace std;
void swap(int arr[],int size,int c,int n);
int main()
{
	int n;
	cout<<"enter the size of the array ";
	cin>>n;
	int arr[n];
	cout<<"enter the array elements ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			swap(arr,n,j,j+1);
		}
	}
	cout<<"the array after sorting is ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
void swap(int arr[],int size,int c,int n)
{
	int temp;
	temp=arr[c];
	arr[c]=arr[c+1];
	arr[c+1]=temp;
	
}
