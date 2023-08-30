#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(6);
	
	cout<<"finding 6 -->"<<binary_search(v.begin(),v.end(),6)<<endl;
	return 0;
}
//karm karo to fal milta hai aj nahi to kal miltahai

