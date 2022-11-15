#include<bits/stdc++.h>
using namespace std;

typedef long long int              ll;
typedef vector<int>                vi;

#define inp(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define inps(a, n, sum)                  for(int Ele=0; Ele<(n); Ele++){std::cin>>a[Ele]; sum += a[Ele];}
#define out(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]

#define pb push_back

#define all(v)                    v.begin(), v.end()
#define mem(x,i) memset((x),(i),sizeof((x)))


void solve() {
	int n, k;
	cin >> n;
	int a[n];
	inp(a, n);
	cin >> k;
	int sum = 0, m = 0;
	int i = 0, j = 0;
	while (j < n) {
		sum += a[j];
		if (j - i + 1 < k) {
			j++;
		} else if ((j - i) + 1 == k) {
			m = max(sum, m);
			sum = sum - a[i];
			i++;
			j++;
		}

	}
	cout << m << endl;
}

int main() {
	// ll t;
	// cin >> t;
	// while (t--)
	solve();
	return 0;
}

