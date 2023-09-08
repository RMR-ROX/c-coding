#include<iostream>
using namespace std;
int nthTermOfGP(int N, int A, int R);
int main()
{
	int n,a,r;
	cout<<"enter n a and r respectively ";
	cin>>n>>a>>r;
	 int ans= nthTermOfGP(n,a,r);
	 cout<<"ans is "<<ans;
	 return 0; 
}
int nthTermOfGP(int N, int A, int R) {
    int mod = 100000000 + 7;
    int n = N - 1;
    int a = A;
    int r = R;

    if (n == 0) {
        return a%mod;
    }

    int ans = (nthTermOfGP(n , a, r) % mod) * r%mod;

    return ans;
}

