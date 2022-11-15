#include<bits/stdc++.h>
using namespace std;

typedef long long int              ll;

#define inp(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cin>>a[Ele]
#define inps(a, n, sum)            for(int Ele=0; Ele<(n); Ele++){std::cin>>a[Ele]; sum += a[Ele];}
#define out(a, n)                  for(int Ele=0; Ele<(n); Ele++)std::cout<<a[Ele]<<endl
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define max(a,b)				   (a>b?a:b)


#define mem(x,i) 				   memset((x),(i),sizeof((x)))
#define pb 						   push_back

void factorial(int i, vector<int>& fact) {
	int carry = 0, prod;
	vector<int> :: iterator it;

	for (it = fact.begin(); it != fact.end(); it++) {
		prod = (*it) * i + carry;
		(*it) = prod % 10;
		carry = prod / 10;
	}

	while (carry) {
		fact.pb(carry % 10);
		carry = carry / 10;
	}
}

int main() {
	vector<int> fact;
	int n = 15;
	fact.pb(1);

	for (int i = 2; i <= n; i++) {
		factorial(i, fact);
	}

	reverse(fact.begin(), fact.end());

	for (auto j : fact)
		cout << j;

	return 0;

}