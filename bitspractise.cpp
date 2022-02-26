#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif
	
	//to check whether the number is in power of 2 or not o(1) soln
	int n; cin>>n;

	cout<<(~(n-1))<<endl;
	cout<<n<<endl;


	cout<<(n&(~(n-1)))==n<<endl;










}
