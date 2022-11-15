#include<bits/stdc++.h>
using namespace std;

typedef vector<int>                vi;
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define pb push_back

vector<vector<char>> ans;
void subSeq(string s, vector<char>& temp, int i) {
	if (i >= s.size()) {
		for (auto it : temp) {
			cout << it << " ";
		}
		if (temp.size() == 0)
			cout << "{}";
		cout << endl;

		return;
	}
	//Element ignored
	subSeq(s, temp, i + 1);

	//Element Taken
	temp.push_back(s[i]);
	subSeq(s, temp, i + 1);
	temp.pop_back();

}

int main() {
	string s;
	cin >> s;
	vector<char> temp;
	subSeq(s, temp, 0);

}