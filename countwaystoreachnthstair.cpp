#include<iostream>
using namespace std;
int count_distinct_ways(long long nstairs);
int main()
{
	long long nstairs;
	cout<<"enter the number of stairs you want to reach to ";
	cin>>nstairs;
	
	cout<<"total number of ways is "<<count_distinct_ways(nstairs);
	return 0;
}
int count_distinct_ways(long long nstairs)
{
	int n=nstairs;
	//base case
	if(n==0)
	return 1;
	if(n<0)
	return 0;
	
	//recursive call
	int ans=count_distinct_ways(n-1)+count_distinct_ways(n-2);
	
	return ans;
	
}

