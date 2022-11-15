#include<bits/stdc++.h>
using namespace std;

typedef long long int              ll;
typedef vector<int>                vi;
typedef unordered_map<int, int>		umi;
typedef unordered_map<char, int>	ums;
typedef map<int, char>				ms;
typedef map<int, int>				mi;

#define FOR(i, a, b) 			   	for (int i = a; i < (b); i++)
#define F0R(i, a) 				   	for (int i = 0; i < (a); i++)
#define inp(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define inps(a, n, sum)                  for(int Ele=0; Ele<(n); Ele++){std::cin>>a[Ele]; sum += a[Ele];}
#define out(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define max(a, b)                  	(a < b ? b : a)
#define min3(a, b, c)               ((a<b)?(a<c)? a :c :(b<c)? b: c)
#define min(a, b)                  	((a > b) ? b : a)


#define pb push_back

#define all(v)                    v.begin(), v.end()
#define mem(x,i) memset((x),(i),sizeof((x)))


void solve() {
	int n, count;
	cin >> n;
	unordered_map<char, int> um;
	string s;
	string ptr;
	cin >> ptr;
	cin >> s;
	F0R(i, ptr)
	um[ptr[i]]++;

	count = um.size();
	while (j < s.length()) {
		if (j - i + 1 == ptr.length()) {
			if ()
			}
	}

}

int main() {
	// ll t;
	// cin >> t;
	// while (t--)
	solve();
	return 0;
}

