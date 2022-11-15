#include<bits/stdc++.h>
using namespace std;

typedef vector<int>                vi;
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define pb push_back

int fibo(int n) {
	if (n == 0) {
		// cout << 0 << " ";
		return 0;
	}
	if (n == 1) {
		// cout << 1 << " ";
		return 1;
	}
	cout << fibo(n - 1) + fibo(n - 2) << " ";
	return ;
}

int main() {
	int n;
	cin >> n;
	fibo(n);

}