#include<bits/stdc++.h>
using namespace std;

typedef long long int              ll;
typedef vector<int>                vi;

#define inp(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define inps(a, n, sum)                  for(int Ele=0; Ele<(n); Ele++){std::cin>>a[Ele]; sum += a[Ele];}
#define out(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]

#define pb push_back
#define pp pop_back

#define all(v)                    v.begin(), v.end()
#define mem(x,i) memset((x),(i),sizeof((x)))

// void print(vector<vector<char>> ans) {
// 	for (auto row : ans) {
// 		for (auto col : row)
// 			cout << col;
// 		cout << endl;
// 	}
// }
vector<vector<char>> ans;

vector<vector<int>> ans;

void print(vector<vector<int>> temp) {
	for (auto row : temp) {
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}
	// cout << ans.size();
}





//PRINT ALL SUBSEQUENCE

// void subSeq(string s, int i, vector<char>& temp) {
// 	if (i >= s.length()) {
// 		if (temp.size() == 0) {
// 			temp.pb('{');
// 			temp.pb('}');
// 			ans.pb(temp);
// 			temp.clear();
// 		}
// 		else
// 			ans.pb(temp);
// 		return;
// 	}

// 	subSeq(s, i + 1, temp);

// 	temp.pb(s[i]);
// 	subSeq(s, i + 1, temp);
// 	temp.pp();
// }


//PRINT and COUNT SUBSEQUENCE WITH SUM K

int sumSeq(vector<int> s, int i, int sum, int k, vector<int> temp) {
	if (sum > k)
		return 0;

	if (i == s.size()) {
		if (sum == k) {
			ans.pb(temp);
			return 1;
		} else
			return 0;
	}



	temp.pb(s[i]);
	// cout << i << endl;
	int l = sumSeq(s, i + 1, sum + s[i], k, temp);
	temp.pp();

	int r = sumSeq(s, i + 1, sum, k, temp);

	return l + r;
}

// int main() {
// 	string s;
// 	cin >> s;
// 	vector<char> temp;
// 	subSeq(s, 0, temp);
// 	// int i = 0;
// 	print(ans);
// 	return 0;
// }

int main() {
	vector<int> s;
	int k;

	for (int i = 0; i < 7; i++) {
		int val;
		cin >> val;
		s.pb(val);
	}

	// for (int val : s)
	// 	cout << val;

	cin >> k;
	vector<int> temp;

	cout << sumSeq(s, 0, 0, k, temp) << endl;

	print(ans);
	return 0;
}