#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size,int key);
int main()
{
	int n,key;
cout<<"enter the size of the array ";
cin>>n;
int arr[n];
cout<<"enter  the array ";
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cout<<"enter the target element you want to find ";
cin>>key;
cout<<key <<" is present at index "<<Binarysearch(arr,n,key) <<" "<<endl;
return 0;
}
int Binarysearch(int arr[],int size,int key)
{
	int start=0,end=size-1,mid;
	while(start<=end)
{
	mid=(start+end)/2;
	if(arr[mid]==key)
	return mid;
	else if(arr[mid]<key)
	{
		start=mid+1;
	}
	else if(arr[mid]>key)
	{
		end=mid-1;
	}
}
}
