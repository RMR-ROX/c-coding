#include<iostream>

using namespace std;
bool binary_search2d(int arr[4][4],int target);
int main()
{
	int arr[4][4],target,i;
	cout<<"enter the array elements ";
	for(i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"enter the target element you want to find ";
	cin>>target;
	if(binary_search2d(arr,target))
	cout<<target<<" is present";
	return 0;
}
bool binary_search2d(int arr[4][4],int target)
{
	int row=4,col=4;
	int rowindex=0,colindex=col-1;
	
	while(rowindex<row && colindex>=0)
	{
		if(arr[rowindex][colindex] == target)
		return true;
		else if(arr[rowindex][colindex] > target )
		colindex--;
		else if(arr[rowindex][colindex] < target)
		rowindex++;
		
	}
	
	
	return false;
	
}

	
