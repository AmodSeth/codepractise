// /*based on the set theory principle
// we add subtract add sub

// */

// /*1. total num of permutatuion of 0-9 which contains 13,49,34,23
// */

// /*
//  total permutations 10!

//  p13+p49+p34+p23- p13,49-p,49,34-p34,23-p23,13
//  +p13,49,34+p49,34,23+p34,23,13+p23,13,49

//  -p13+49+34-23
  

//   p13  

// */

// /*
// total num which are less than 500 and div by first 10 prime numbers

// */


#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define fin(i,n) for(int i=0;i<n;i++)
using namespace std;

void solve()
{
	int n;
	cin >> n;

	vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	int m = primes.size();

	int ans = 0;

	for (int i = 1; i < (1 << m); i++) {

		int lcm = 1;
		for (int j = 0; j < m; j++) {
			// if jth bit of ith element is set then include it
			if ((i >> j) & 1) {
				// cout << primes[j] << " ";
				lcm *= primes[j];
			}
		}
		// cout << '\n';

		if (__builtin_popcount(i) % 2 == 0) {
			ans -= (n / lcm);
		}
		else {
			ans += (n / lcm);
		}
	}


	cout << ans;


    




}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif

    int t=1;
    // cin>>t;
    while(t--) solve();
}
