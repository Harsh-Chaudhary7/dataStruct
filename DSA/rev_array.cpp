#include<bits/stdc++.h>
using namespace std;

typedef vector<int>                vi;
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define pb push_back


// Using 2-pointer

// void reverse(vector<int> &a, int l, int r) {
// 	if (l >= r)
// 		return;
// 	swap(a[l], a[r]);
// 	reverse(a, l + 1, r - 1);
// }

// int main() {
// 	vector<int> a = {1, 2, 3, 4, 5, 6};
// 	for (int n : a) {
// 		cout << n << " ";
// 	}
// 	cout << endl;
// 	reverse(a, 0, a.size() - 1);
// 	for (int n : a) {
// 		cout << n << " ";
// 	}
// }

// Using 1-pointer
void reverse(vector<int> &a, int i, int n) {
	if (i >= n / 2)
		return;
	swap(a[i], a[n - i - 1]);
	reverse(a, i + 1, n);
}

int main() {
	vector<int> a = {1, 2, 3, 4, 5, 6};
	for (int n : a) {
		cout << n << " ";
	}
	cout << endl;
	reverse(a, 0, a.size());
	for (int n : a) {
		cout << n << " ";
	}


}