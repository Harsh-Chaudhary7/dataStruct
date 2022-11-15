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


int climb(int n, int step, int cnt) {
	if (step == n) {
		cnt++;
		return cnt;
	}
	if (step > n)
		return cnt;

	cnt = climb(n, step + 1, cnt);

	cnt = climb(n, step + 2, cnt);
	return cnt;
}



void solve() {
	int n = 2;
	int step = 0, cnt = 0;

	cout << climb(n, step, cnt);

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
