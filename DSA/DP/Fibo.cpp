#include<bits/stdc++.h>
using namespace std;
#define inp(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]

int solve(int i, vector<int> &heights, vector<int> &dp) {
	if (i == 0)
		return 0;

	if (dp[i] != -1)
		return dp[i];

	int l = solve(i - 1, heights, dp) + abs(heights[i] - heights[i - 1]);
	int r = INT_MAX;
	if (i > 1)
		r = solve(i - 2, heights, dp) + abs(heights[i] - heights[i - 2]);

	return dp[i] = min(l, r);

}



// #include<bits/stdc++.h>
// #include<math.h>
// #include<cmath>
// using namespace std;

// // Template

// #define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define Harsh_Chaudhary std::ios::sync_with_stdio(false);
// #define H_C std::cin.tie(nullptr);

// using i64 = long long;
// using u64 = unsigned long long;
// using u32 = unsigned;

// typedef long long int              	ll;
// typedef vector<int>                	vi;
// typedef vector<ll>                 	vl;
// typedef vector<vector<int>>        	vvi;
// typedef pair<int, int>             	pi;
// typedef unordered_map<int, int>		umi;
// typedef unordered_map<char, int>	ums;
// typedef map<int, char>				ms;
// typedef map<int, int>				mi;

// #define sz(x)                      	((int)(x).size()) //never forget to type into int
// #define inp(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
// #define out(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
// #define max(a, b)                  	(a < b ? b : a)
// #define min(a, b)                  	((a > b) ? b : a)

// #define INF                        	1e18
// #define lb                         	lower_bound
// #define ub                         	upper_bound
// #define min_element                	*min_element
// #define max_element                	*max_element
// #define pb 							push_back
// #define ppb 						pop_back()

// #define mod                       (in1e9+7
// #define mem(x,i) memset((x),(i),sizeof((x)))

// // Template

// //Memo

// // int fibo(int n, vector<int> dp) {
// // 	if (n <= 1)
// // 		return n;
// // 	if (dp[n] != -1)
// // 		return dp[n];

// // 	return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
// // }

// //DP

// int fibo(int n) {
// 	// vi dp(n + 1, -1);
// 	int curr, prev = 1, prev2 = 0;
// 	// dp[0] = 0; dp[1] = 1;
// 	for (int i = 2; i <= n; i++) {
// 		// dp[i] = dp[i - 1] + dp[i - 2];
// 		curr = prev + prev2;
// 		prev2 = prev;
// 		prev = curr;
// 	}

// 	// return dp[n];
// 	return curr;
// }

// void solve() {
// 	int n = 6;
// 	cout << fibo(n);

// }

// int main() {
// 	fast_io
// 	Harsh_Chaudhary
// 	H_C
// 	// ll t;
// 	// cin >> t;
// 	// while (t--)
// 	solve();

// 	return 0;
// }
