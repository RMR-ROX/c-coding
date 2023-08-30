#include<iostream>
using namespace std;
void reverse(string s);
int main()
{
//	int size=9;
//	char ch[size];
//	cout<<"enter the character array";
//	cin.getline(ch,size);
//	cout<<" entered array is ";
//	for(int i=0;ch[i]!='\0';i++)
//	{
//		cout<<ch[i];
//	}
string userInput;
cout << "Enter a string: ";
getline(cin, userInput);
//cout << "You entered: " << userInput << endl;
reverse(userInput);
return 0;
}
void reverse(string s)
{
	int st=0,e=s.length()-1;
	for(int i=e;i>=st;i--)
{
	cout<<s[i];
	}	
	
}

