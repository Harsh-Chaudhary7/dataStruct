#include<bits/stdc++.h>

using namespace std;

// int minidx(int arr[], int i, int j){
// 	if(i==j)
// 		return i;

// 	int ele = minidx(arr,i+1,j);
	
// 	return arr[ele]>arr[i] ? i : ele;
// }

// void solve(int arr[], int n, int i=0){

// 	if(i==n)
// 		return;

// 	int min_idx = minidx(arr,i,n-1);

// 	swap(arr[i],arr[min_idx]);

// 	solve(arr,n,i+1);

// }
vector<vector<int>> ans;
// void solve(vector<int> arr, int n, int i, vector<int> nums){
// 	if(i==n){
// 		ans.push_back(nums);
// 		return;
// 	}

// 	solve(arr, n, i+1, nums);

// 	nums.push_back(arr[i]);
// 	solve(arr,n,i+1,nums);

// }

void solve(vector<int> arr)

int main(){
	vector<int> arr = {2,3,6};
	int n = 3;
	vector<int> nums;

	solve(arr,n,0,nums);

	for(auto x: ans){
		if(x.size()==0){
			cout<<"''"<<endl;
			continue;
		}
		for(auto val: x){			
			cout<<val<<" ";
		}
		cout<<endl;
	}
	return 0;
}