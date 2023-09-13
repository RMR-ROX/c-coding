#include<iostream>
#include<math.h>
using namespace std;
int power(int a,int b);
int main()
{
	int a,b;
	cout<<"enter the number and power ";
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}
int power(int a, int b)
{
	
	//base case
	if(b == 0){
	return 1;
   }
if(b == 1)
{
	return a;
}
	
  //recursive relation 
 int ans,res;
 
 if(b & 1 == 1)//odd
 {
 	ans=power(a,(b-1)/2);
 	res= a* ans * ans;
 }
 else//even
 {
 	ans=power(a,b/2);
 	res=ans*ans;
 }
 
 return res;
}

