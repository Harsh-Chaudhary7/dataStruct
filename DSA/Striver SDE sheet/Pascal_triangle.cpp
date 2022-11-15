#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>;
#define ll long long;
#define umi unordered_map<int,int> ;
#define ums unordered_map<char,int>;


void solve() {
	int rows = 7;
	vector<vector<int>> r(rows);
	for (int i = 0; i < rows; i++) {
		r[i].resize(i + 1);
		r[i][0] = r[i][i] = 1;
		for (int j = 1; j < i; j++) {
			r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < r[i].size(); j++) {
			cout << r[i][j] << " ";
		}
		cout << endl;
	}

}
int main() {

	// ll t;
	// cin>>t;
	// while(t--)
	solve();
	return 0;
}