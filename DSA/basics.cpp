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
	int arr[] = { 1, 0, 0, 1, 0, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	unordered_map<int, int> m;

	int sum = 0; // sum of array
	int ans = 0; // number of subarrays with equal 0's and 1's

	// intialising sum 0 with 1 in map
	m.insert(pair<int, int>(0, 1));


	for (int val : arr) {
		if (val == 0)
			sum += -1;		//adding -1 if 0 is encountered
		else
			sum += 1;		//adding 1 if 1 is encountered


		if (m.find(sum) != m.end())
			ans += m[sum]++;		//incrementing number of subarray with equal 1's and 0's
		else
			m[sum] = 1;				//initialising value of sum whenever it's encountered first time
	}

	cout << ans << endl;

}

int main() {
	solve();
	return 0;
}

