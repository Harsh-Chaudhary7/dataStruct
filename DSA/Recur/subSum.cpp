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

void print(vi temp) {
	for (int val : temp)
		cout << val << endl;
	cout << endl;
}

void subSum(vector<int> nums, int i, int sum, vi& temp) {
	if (i == nums.size()) {
		temp.pb(sum);
		return;
	}

	subSum(nums, i + 1, sum + nums[i], temp);
	// temp.pp();

	subSum(nums, i + 1, sum, temp);
}


int main() {
	vi nums(3);

	for (auto &val : nums)
		cin >> val;
	vi temp;

	subSum(nums, 0, 0, temp);

	print(temp);

	return 0;
}