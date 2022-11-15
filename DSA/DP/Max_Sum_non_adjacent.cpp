#include<bits/stdc++.h>
#include<math.h>
#include<cmath>
using namespace std;

// Template

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Harsh_Chaudhary std::ios::sync_with_stdio(false);
#define H_C std::cin.tie(nullptr);

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

typedef long long int              	ll;
typedef vector<int>                	vi;
typedef vector<ll>                 	vl;
typedef vector<vector<int>>        	vvi;
typedef pair<int, int>             	pi;
typedef unordered_map<int, int>		umi;
typedef unordered_map<char, int>	ums;
typedef map<int, char>				ms;
typedef map<int, int>				mi;

#define sz(x)                      	((int)(x).size()) //never forget to type into int
#define inp(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define out(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define max(a, b)                  	(a < b ? b : a)
#define min(a, b)                  	((a > b) ? b : a)

#define INF                        	1e18
#define lb                         	lower_bound
#define ub                         	upper_bound
#define min_element                	*min_element
#define max_element                	*max_element
#define pb 							push_back
#define ppb 						pop_back()

#define mod                       (in1e9+7
#define mem(x,i) memset((x),(i),sizeof((x)))

// Template

//Recur, Memo
// int sub(int n, vi arr, int idx, vector<int>& dp) {
// 	if (idx == 0) {
// 		return arr[idx];
// 	}

// 	if (idx < 0)
// 		return 0;

// 	if (dp[idx] != -1)
// 		return dp[idx];

// 	int s1 = arr[idx] + sub(n, arr, idx - 2, dp);
// 	int s2 = 0 + sub(n, arr, idx - 1, dp);

// 	return dp[idx] = max(s1, s2);
// }


// DP
int sub(int n, vi arr, vector<int>& dp) {
	dp[0] = arr[0];
	int neg = 0;

	int s1 = 0, s2 = 0;
	for (int i = 1; i < n; i++) {
		s1 = arr[i];
		if (i > 1)
			s1 += dp[i - 2];
		s2 = 0 + dp[i - 1];
		dp[i] = max(s1, s2);
	}

	return dp[n - 1];

}


void solve() {
	int n, k;
	cin >> n;
	cout<<n+5;
	// vector<int> arr(n);
	// inp(arr, n);

	// vector<int> dp(n + 1, -1);
	// // cout << sub(n, arr, n - 1, dp) << endl;
	// cout << sub(n, arr, dp) << endl;
	// cout << INT_MIN << endl;

}

int main() {
	fast_io
	Harsh_Chaudhary
	H_C
	// ll t;
	// cin >> t;
	// while (t--)
	solve();

	return 0;
}
