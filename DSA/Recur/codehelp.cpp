#include<bits/stdc++.h>
using namespace std;


// bool isSorted(int arr[], int n){
// 	if(n==0 || n==1)
// 		return true;
// 	if(arr[0]>arr[1])
// 		return false;

// 	return isSorted(arr+1,n-1);
// }
// bool bs(vector<int> arr, int s, int e, int k){
// 	if(s>e)
// 		return false;

// 	int mid = (s+e)/2;

// 	if(arr[mid]==k)
// 		return true;
// 	else if(arr[mid]<k)
// 		return bs(arr,mid+1,e,k);
// 	else
// 		return bs(arr,s,mid-1,k);

// }

// int findpeak(vector<int> arr, int s, int e){
        
//         int mid = s + (e-s)/2;
        
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
//             return mid;
//         else if(arr[mid]>arr[mid+1])
//             e = mid;
//         else
//             s = mid+1;
        
//         return findpeak(arr,s,e);
//     }

// int pivot(vector<int> arr, int s, int e){

// 	if(s>=e)
// 		return s;

// 	int mid = s + (e-s)/2;
// 	// cout<<mid;

// 	if(arr[mid]>arr[0])
// 		s = mid+1;
// 	else if(arr[mid]<arr[0])
// 		e = mid;

// 	return pivot(arr,s,e);
// }

// int sqroot(long long int s, long long int e,long long int sq, long long int ans){
//     if(s>e)
//         return ans;

//     long long int mid = s + (e-s)/2;
    
//     if((mid*mid) == sq)
//         return mid;
//     else if((mid*mid) > sq)
//         e = mid-1;
//     else{
//     	ans = mid;
//         s = mid+1;
//     }
    
//     return sqroot(s,e,sq,ans);
        
// }

// string revstring(string s, int st, int e){
// 	if(st>=e)
// 		return s;

// 	swap(s[st],s[e]);

// 	return revstring(s,st+1,e-1);

// }

// bool checkPal(string s, int st, int e){
// 	if(st>=e)
// 		return true;

// 	if(s[st] != s[e])
// 		return false;
// 	// cout<<s[st]<<" "<<s[e]<<" "<<st<<" "<<e<<" "<<endl;

// 	return checkPal(s,st+1,e-1);
// }

// long long int power(long long int a, int b){
// 	if(b==0)
// 		return 1;
// 	if(b==1)
// 		return a;

// 	if(b&1)
// 		return a * power(a*a,b/2);

// 	return power(a*a,b/2);
// }

// void bubble(vector<int> &arr, int n){
// 	if(n==0 || n==1)
// 		return;

// 	for(int i=0; i<n-1; i++){
// 		if(arr[i] > arr[i+1])
// 			swap(arr[i],arr[i+1]);
// 	}

// 	bubble(arr,n-1);

// }

// MERGE SORT

// void merge(vector<int> &arr, int s, int mid, int e){
	
// 	vector<int> a(mid - s + 1);
// 	vector<int> b(e-mid);

// int len1 = mid - s + 1;
// int len2 = e - mid;
// int idx  = s;

// 	for(int i=0; i<len1; i++)
// 		a[i]=(arr[idx++]);
		
// 	for(int i=0; i<len2; i++)
// 		b[i] = (arr[idx++]);
	

// 	int i = 0, j = 0;
// 	int k=s; 
// 	while(i<len1 && j<len2){
// 		if(a[i]>b[j]){
// 			arr[k++] = b[j++];
// 		}else
// 			arr[k++] = a[i++];
// 	}

// 	while(i<len1)
// 		arr[k++] = a[i++];
// 	while(j<len2)
// 		arr[k++] = b[j++];

// }

// void mergeSort(vector<int> &arr, int s, int e){
// 	if(s>=e)
// 		return;
// 	int mid = s + (e-s)/2;


// 	mergeSort(arr,s,mid);

// 	mergeSort(arr,mid+1,e);

// 	merge(arr,s,mid,e);

// }

// POWER SET

// vector<vector<int>> ans;

// void powerset(vector<int> arr, int n, int i, vector<int> temp){
// 	if(i==n){
// 		ans.push_back(temp);
// 		// temp.clear();
// 		return;
// 	}

// 	powerset(arr,n,i+1,temp);

// 	temp.push_back(arr[i]);
// 	powerset(arr,n,i+1,temp);
// 	temp.pop_back();

// }

// vector<vector<char>> ans;
// void powerset(string arr, int n, int i, vector<char> temp){
// 	if(i==n){
// 		ans.push_back(temp);
// 		// temp.clear();
// 		return;
// 	}	

// 	temp.push_back(arr[i]);
// 	powerset(arr,n,i+1,temp);
// 	temp.pop_back();

// 	powerset(arr,n,i+1,temp);
// }

// void perm(string s, int n, int i, string temp, vector<string> &ans){
// 	if(i>=n){
// 		ans.push_back(s);
// 		return;
// 	}

// 	for(int idx=i; idx<n; idx++){
// 		swap(s[i],s[idx]);
// 		perm(s,n,i+1,temp,ans);
// 		// temp.push_back(s[idx]);
// 		// perm(s,n,i+1,temp,ans);
// 		swap(s[i],s[idx]);
// 	}

// }

// RAT IN A MAZE

// bool validCell(int i, int j, int n, vector<vector<int>> maze, vector<vector<int>> vis){
// 	if(i>=n || i<0 || j>=n || j<0 || maze[i][j]==0 || vis[i][j])
// 		return false;
// 	return true;
// }
	
// void solveMaze(vector<vector<int>> maze, int n, int i, int j, string temp, vector<string> &ans, vector<vector<int>> &vis){
// 	if(!validCell(i,j,n,maze,vis))
// 		return;

// 	if(i==n-1 && j==n-1){
// 		ans.push_back(temp);
// 		return;
// 	}

// 	vis[i][j]=1;

// 	temp.push_back('U');
//     solveMaze(maze,n,i-1,j,temp,ans,vis);
//     temp.pop_back();
//     temp.push_back('R');
//     solveMaze(maze,n,i,j+1,temp,ans,vis);
//     temp.pop_back();
//     temp.push_back('D');
//     solveMaze(maze,n,i+1,j,temp,ans,vis);
//     temp.pop_back();
//     temp.push_back('L');
//     solveMaze(maze,n,i,j-1,temp,ans,vis);
//     temp.pop_back();

//     vis[i][j]=0;

// }



int main(){

// int arr[] = {0,10,5,0};
	// vector<int> arr = {7,9,1,2,4,6};
	// string s;
	// cin>>s;
	// int n = s.length();

// cout<<(isSorted(arr,6)==1 ? "true" : "false") <<endl;

// cout<<(bs(arr,0,6,9) ? "true" : "false")<<endl;

// cout<<arr[findpeak(arr,0,3)]<<endl;

// cout<<pivot(arr,0,5)<<endl;

// int key;
// cin>>key;
// int pvt = pivot(arr,0,6);
// if(key>=arr[pvt] && key<=arr[5])
	//cout<<(bs(arr,pvt,5,key)? "true" : "false")<<endl;
// else
	//cout<<(bs(arr,0,pvt-1,key)? "true" : "false")<<endl;

// cout<<sqroot(0,7653333333,7653333333,0)<<endl;

// cout<<revstring(s,0,n-1)<<endl;
// cout<<(checkPal(s,0,n-1) ? "Yes, it is a palindrome" : "No, it is not a palindrome")<<endl;
// cout<<(long long)power(2,61)<<endl;

// bubble(arr,6);
// mergeSort(arr,0,5);
	// vector<string> ans;
	// string temp;

// powerset(s,n,0,{});
// perm(s,n,0,temp,ans);

	// RAT IN A MAZE

	vector<vector<int>> maze = {{1, 0, 0, 0},
         						{1, 1, 0, 1}, 
         						{1, 1, 0, 0},
         						{0, 1, 1, 1}};

    int n = 4;
    vector<string> ans;
    vector<vector<int>> vis(n,vector<int>(n,0));
    solveMaze(maze,n,0,0,"",ans,vis);



for(auto x : ans){
	cout<<x<<" "<<endl;
}
// cout<<endl;

// for(auto x:ans){
// 	if(x.size()==0)
// 		cout<<"{}";
// 	for(auto val : x){
// 			cout<<val;
// 	}
// 	cout<<endl;
// }
	

	return 0;
}