#include<bits/stdc++.h>
using namespace std;

typedef vector<int>                vi;
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define pb push_back

// Print count of subSeq_Sum
int subSeq_Sum(vi &s, int i, int sum, int target) {
	if (i >= s.size()) {
		if (sum == target)
			return 1;

		return 0;
	}
	int l = 0, r = 0;

	l = subSeq_Sum(s, i + 1, sum + s[i], target);

	r = subSeq_Sum(s, i + 1, sum, target);

	return l + r;
}



//Print any one subSeq_Sum
// vector<vector<int>> ans;
// bool subSeq_Sum(vi &s, vector<int>& temp, int i, int sum, int target) {
// 	if (i >= s.size()) {
// 		if (sum == target) {
// 			ans.push_back(temp);
// 			return true;
// 		}

// 		return false;
// 	}

// 	temp.push_back(s[i]);
// 	if (subSeq_Sum(s, temp, i + 1, sum + s[i], target) == true)
// 		return true;

// 	temp.pop_back();

// 	if (subSeq_Sum(s, temp, i + 1, sum, target) == true)
// 		return true;

// 	return false;

// }


// Print all subSeq_Sum
// vector<vector<int>> ans;
// void subSeq_Sum(vi &s, vector<int>& temp, int i, int sum, int target) {
// 	if (i >= s.size()) {
// 		if (sum == target)
// 			ans.push_back(temp);
// 		return;

// 	}

// 	temp.push_back(s[i]);
// 	subSeq_Sum(s, temp, i + 1, sum + s[i], target);
// 	temp.pop_back();

// 	subSeq_Sum(s, temp, i + 1, sum, target);
// }

int main() {
	vi a = { 3, 1, 2, 1, -1};
	int target;
	cin >> target;
	vector<int> temp;

	cout << subSeq_Sum(a, 0, 0, target);

	// subSeq_Sum(a, temp, 0, 0, target);
	// for (int i = 0; i < ans.size(); i++) {
	// 	for (int j = 0; j < ans[i].size(); j++)
	// 		cout << ans[i][j] << " ";
	// 	cout << endl;
	// }

}