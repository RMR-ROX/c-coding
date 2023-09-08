#include<iostream>
using namespace std;
bool isSorted(int arr[],int size);

int main()
{
	int size;
	cout<<"enter the size of array ";
	cin>>size;
	int *arr=new int[size];
	cout<<"enter the array elements ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		
	}
	if(isSorted(arr,size))
	{
		cout<<"array is sorted ";
	}
	else
	{
		cout<<"array is not sorted ";
	}
	
	delete []arr;
	return 0;
}
bool isSorted(int arr[],int size)
{
	//base case
	if(size==0 || size==1 )
	{
		return true;
	}
	//recursive relation
	size--;
	return (isSorted(arr,size) && (arr[size] > arr[size-1]));
	
}

