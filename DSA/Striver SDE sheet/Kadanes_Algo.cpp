#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
#define umi unordered_map<int,int>
#define ums unordered_map<char,int>


void solve() {
	vi a = { -2, -3, 4, -1, -2, 1, 5, -3};
	int n = a.size();
	int sum = 0;
	int maxi = a[0];
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum < 0)
			sum = 0;
		maxi = max(sum, maxi);
	}
	cout << maxi;
}
int main() {

	// ll t;
	// cin>>t;
	// while(t--)
	solve();
	return 0;
}