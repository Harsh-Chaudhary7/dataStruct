#include<bits/stdc++.h>
using namespace std;

#define printarr(arr)     for(auto val : arr){cout<<val<<" ";}

// void printBinary(int num){
// 	int ct=0;
// 	for(int i=5; i>=0; i--){
// 		cout<<((num>>i)&1);
// 		if((num>>i)&1)
// 			ct++;
// 	}
// 	cout<<endl<<ct<<endl;
// }
// int s1(int a, int b){
// 	if(4<a && (4&b) > (b-4)){
// 		b +=2;
// 		a+=2;
// 		return b -s1(a,a+2);
// 	}
// 	b= 3+b+a;
// 	return a-1;
// }






void merge(vector<int> &nums, int start, int mid, int end){	

	int len1 = mid-start+1;
	int len2 = end - mid;

	auto *left = new int[len1];
	auto *right = new int[len2];


	for(int i=0; i<len1; i++){
		left[i] = nums[start+i];
	}

	for(int i=0; i<len2; i++){
		right[i] = nums[mid+1+i];
	}

	int i=0, j=0,k=start;

	while(i<len1 && j<len2){
		if(left[i]<=right[j]){
			nums[k] = left[i];
			i++;k++;
		}else{
			nums[k] = right[j];
			j++;k++;
		}
	}

	while(i<len1){
		nums[k] = left[i];
			i++;k++;
	}

	while(j<len2){
		nums[k] = right[j];
			j++;k++;
	}

	delete[] left;
	delete[] right;

}

void mergeSort(vector<int> &nums,int start, int end){
	if(start >= end)
		return;

	int mid = start + (end-start)/2;

	mergeSort(nums,start,mid);
	mergeSort(nums,mid+1,end);
	merge(nums,start,mid,end);
}

int partition(vector<int> &nums, int start, int end){
	int pivot = nums[start];

	int cnt = 0;
	for(int i = start+1; i<=end; i++)
		if(nums[i]<pivot)
			cnt++;

	int pidx = start + cnt;
	swap(nums[start], nums[pidx]);

	int i = start, j = end;

	while(i<pidx && j>pidx){

		while(nums[i]<pivot)
			i++;
		while(nums[j]>pivot)
			j--;

		if(i<pidx && j>pidx)
			swap(nums[i++],nums[j--]);
	}

	return pidx;

}


void quickSort(vector<int> &nums, int start, int end){
	if(start >= end)
		return;

	int pi = partition(nums,start,end);

	quickSort(nums,start,pi-1);
	quickSort(nums,pi+1,end);
}


void solve(){

vector<int> nums = {5,2,0,13,6,2,9,10};

int n = nums.size();

// mergeSort(nums,0,n-1);
quickSort(nums,0,n-1);

printarr(nums);





// vector<int> temp;

// int n = a1.size(), m = a2.size();
// int i=1;
// int curr = a1[0];
// while(i<n){
// 	temp.push_back(curr);
// 	while(a1[i] == curr)
// 		i++;
// 	curr = a1[i];
// }
// for(auto val: temp)
// cout<<val<<" ";
// cout<<endl;

// // vector<int> temp1;
// i = 1;
// curr = a2[0];
// while(i<m){
// 	temp.push_back(curr);
// 	while(a2[i] == curr)
// 		i++;
// 	curr = a2[i];
// }


// sort(temp.begin(), temp.end());

// cout<<temp[(temp.size()-1)/2];



// int n = 4, x=2;
// vector<int> nums = {2,1,7,5};
// int k = 0;
// vector<int> ans;
//         stack<int> st;
//         st.push(INT_MIN);
//         for(int i=n-1;i>=0;i--){
//             st.push(nums[i]);
//         }
//         for(int i=n-1;i>=0;i--){
//             int curr=nums[i];
//             while(st.top()!=INT_MIN and st.top()<=curr){
//                 st.pop();
//             }
//             	if(st.top()!=INT_MIN)
//             		st.pop();
//             while(st.top()!=INT_MIN and st.top()<=curr){
//                 st.pop();
//             }
//             ans.push_back(st.top()==INT_MIN?-1:st.top());
//             st.push(curr);
//         }
        
// int k = 0;
// for(int i=0;i<n-1; i++){
// 	int cnt = 0;
// 	for(int j=i+1; j<n; j++){
// 		if(arr[i]+2 <= arr[j]){
// 			cnt++;
// 			if(cnt == 2)
// 				ans.push_back(arr[j]);
// 				// ans[k++] = arr[j];
// 		}
// 	}
// 	if(cnt<2)
// 		ans.push_back(-1);
// }



	// printBinary(20);
	// int num = 20;

	// int i = 2;

	// // unset ith bit
	// num = num & (~(1<<i));
	// printBinary(num);
	// //set ith bit
	// num = num | (1<<i);
	// printBinary(num);

	// // check ith bit
	// // if((num & (1<<i)) == 0)
	// // 	cout<<"not set"<<endl;
	// // else
	// // 	cout<<"set"<<endl;

	// // toggle ith bit
	// num = num ^ (1<<3);
	// printBinary(num);


// int n = 6;
	// vector<int> arr = {25,77,54,81,48,34};
// 	for(int i=0; i<n; i++){
// 		temp.push_back(i+1);
// 	}

// int ans = 0;
// 	for(int i=0; i<n; i++){
// 		int temp = sqrt(arr[i]);
// 		// cout<<temp<<endl;
// 		int check = temp*temp;
// 		if(check == arr[i])
// 			ans++;
// 	}

// 	cout<<ans;

// vector<vector<int>> queries = {{2,2}, {1,5}, {6,10}};

// int m = queries[0][1];

// for(int i=1; i<queries.size(); i++){
// 	int row = queries[i][0];
// 	int col = queries[i][1];
// 	int m = queries[0][1];

// 	while(m--){
// 		swap(temp[row-1], temp[col-1]);
// 		row++;
// 		col--;		
// 	}	
// }

// for(int i=0; i<n; i++){
// 	cout<<temp[i]<<endl;
// }
	




	// for(int i=2; i<=n; i++){
	// 	for(int j=1; j<=i; j++){
	// 		if(i&1){
	// 			if(j<i)
	// 				cout<<(od)<<"$";
	// 			else
	// 				cout<<(od)<<endl;
	// 			od++;
	// 			// cout<<endl;
	// 			// cout<<"odd"<<endl;
	// 		}else{
	// 			if(j<i)
	// 				cout<<(even)<<"$";
	// 			else
	// 				cout<<(even)<<endl;
	// 			even--;
	// 		}			
	// 	}
	// 	even = od + i+1;
	// 		od = even+1;
	// 	cout<<endl;
	// }

}

int main(){
	solve();
	return 0;
}