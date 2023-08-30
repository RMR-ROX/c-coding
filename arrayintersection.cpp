#include<iostream>
using namespace std;
int arrintersect(int arr1[],int arr2[],int size);
int main()
{
	int arr1[10],arr2[10],arr[10],s;
	cout<<"enter the elements of array 1 ";
	for(int i=0;i<10;i++)
	{
		cin>>arr1[i];
	}
	for( int i=0;i<10;i++)
	{
		cin>>arr2[i];
	}
	s=sizeof(arrintersect(arr1,arr2,10))/sizeof(int);
    for(int i=0;i<s;i++)
    {
    	arr[i]=(arrintersect(arr1,arr2,10)+i);
	}
   return 0; 
}
int arrintersect(int arr1[],int arr2[],int size)
{
	int arr[10],t=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr1[i]==arr2[j])
			{
				arr[t]=arr1[i];
				t++;
			}
		}
	}
	return arr;
}
