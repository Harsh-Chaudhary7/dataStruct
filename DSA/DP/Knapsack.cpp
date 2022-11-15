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
typedef vector<pair<int, int>>      vpi;
typedef vector<pair<ll, ll>>        vpl;
typedef unordered_map<int, int>		umi;
typedef unordered_map<char, int>	ums;
typedef map<int, char>				ms;
typedef map<int, int>				mi;

#define sz(x)                      	((int)(x).size()) //never forget to type into int
#define inp(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define inpv(a, n)                  for(int Ele=0; Ele<(n); Ele++){int val;cin>>val;a.push_back(val);}
#define inps(a, n, sum)             for(int Ele=0; Ele<(n); Ele++){std::cin>>a[Ele]; sum += a[Ele];}
#define out(a, n)                  	for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define inp1(a, n)                 	for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define FOR(i, a, b) 			   	for (int i = a; i < (b); i++)
#define F0R(i, a) 				   	for (int i = 0; i < (a); i++)
#define set_bits(n)                	__builtin_popcountll(n)
#define max(a, b)                  	(a < b ? b : a)
#define min3(a, b, c)               ((a<b)?(a<c)? a :c :(b<c)? b: c)
#define min(a, b)                  	((a > b) ? b : a)
#define kick(x)                    	cout << "Case #" << x << ": ";



#define INF                        	1e18
#define lb                         	lower_bound
#define ub                         	upper_bound
#define min_element                	*min_element
#define max_element                	*max_element
#define pb 							push_back
#define ll long long
#define rr return

#define mod                       (in1e9+7
#define mem(x,i) memset((x),(i),sizeof((x)))

// Template

//Recursive
int knapsack(int wt[], int val[], int W, int n) {
	if (n == 0 || W == 0)
		return 0;

	if (wt[n - 1] <= W)
		return max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));

	if (wt[n - 1] > W)
		return knapsack(wt, val, W, n - 1);
}

//Memoization
int t[102][1002];

int knapsack(int wt[], int val[], int W, int n) {
	if (n == 0 || W == 0)
		return 0;

	if (t[n][W] != -1)
		return t[n][W];

	if (wt[n - 1] <= W)
		return t[n][W] = max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));

	if (wt[n - 1] > W)
		return t[n][W] = knapsack(wt, val, W, n - 1);
}

//Top-Down
int t[102][1002];

int knapsack(int wt[], int val[], int W, int n) {
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < W + 1; j++) {
			if (i == 0 || j == 0)
				t[i][j] = 0;
		}
	}
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < W + 1; j++) {
			if (wt[i - 1] <= j)
				t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
			else if (wt[i - 1] > j)
				t[i][j] = t[i - 1][j];
		}
	}


}

void solve() {
	memset(t, -1, sizeof(t));

	knapsack(wt, val, W, n);

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
