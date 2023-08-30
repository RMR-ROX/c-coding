#include<iostream>
using namespace std;
bool checkpermutation(string ,string);
bool checkequal(int arr1[26],int arr2[26]);
int main()
{
	
	cout<<"enter the string ";
	string s1,s2;
	getline(cin,s1);
	cout<<"enter the substring you want to check the presence of permutation of ";
	getline(cin,s2);
	if(checkpermutation(s2,s1))
	{
		cout<<"permutation of substring is present ";
	}
	else
	cout<<"not present ";
	return 0;
}
bool checkpermutation(string s1,string s2)
{
	int count1[26]={0};
	
	//alphabet count in substring
	for(int i=0;i<s1.length();i++)
	{
		int index=s1[i]-'a';
		count1[index]++;
	}
	int i=0,count2[26]={0};
	int windowsize=s1.length();
	
	//running for first window
	while(i<windowsize && i<s2.length() )
	{
		int index=s2[i]-'a';
		count2[index]++;
		i++;
	}
	if(checkequal(count1,count2))
	return true;
	
	//running for remaining windows
	while(i<s2.length())
	{
		int index=s2[i]-'a';
		count2[index]++;
		int oldindex=s2[i-windowsize]-'a';
		count2[oldindex]--;
		i++;
		if(checkequal(count1,count2))
		return true;
	}
	return false;
}
bool checkequal(int count1[26],int count2[26])
{
	for(int i=0;i<26;i++)
	{
		if(count1[i] != count2[i])
		return false;
	}
	return true;
	
}


	
