#include<iostream>
using namespace std;
bool everything_zero(int arr[],int i,int n);
int main()
{
	
	int n,i=0,j=0;
	cout<<"enter the size of the array ";
	cin>>n;
	int* arr=new int[n];
	cout<<"enter the array elements ";
		
	for(int k=0;k<n;k++)//taking input
	{
		cin>>arr[k];
	}
	
	//main algorithm
	while(i<n)
	{
		
		if(arr[i]==0)
		{
			j=i;
			while(j<n)//shifting by one position to the left
			{
				if((j+1) < n){//check to assure j does not cross array bound
				arr[j]=arr[j+1];
			}
			j++;
			}
			arr[n-1]=0;
		}
		else {
			i++;
		}
		
		if(everything_zero(arr,i,n))
		{
			break;
		}
		
	}
	
	
	//printing required array
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<" ";
	}

//freeing space allocated in heap memory
delete[] arr;	
	
}






bool everything_zero(int arr[],int i,int n)
{
	int count=0;
	for(int k=i;k<n;k++)
	{
		if(arr[k]==0){
			count++;
		}		
	}
	
	return count==(n-i);
		
}
