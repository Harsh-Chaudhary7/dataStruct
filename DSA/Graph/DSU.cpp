#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define vi vector<int>
#define ll long long
#define umi unordered_map<int,int>
#define ums unordered_map<char,int>


vector<int> rnk(1000001);
vector<int> parent(1000001);


int findParent(int node) {
	if (node == parent[node])
		return node;

	return parent[node] = findParent(parent[node]); //path compression
}

void un(int u, int v) {
	int a = findParent(u);
	int b = findParent(v);

	if (rnk[a] > rnk[b])
		parent[b] = a;
	else if (rnk[a] < rnk[b])
		parent[a] = b;
	else {
		parent[a] = b;
		rnk[a]++;
	}
}


// Driver Code
int main()
{
	int i = 2;
	cout<<(++i)++<<endl;
	// int n, m;
	// cin >> n >> m;

	// for (int i = 1; i <= n; i++)
	// 	parent[i] = i, rnk[i] = 0;

	// while (m--) {
	// 	int u, v;
	// 	cin >> u >> v;
	// 	un(u, v);
	return 0;
	}

	//Check whether two nodes are of the same component

	// int u, v;
	// cin >> u >> v;

	// cout << (findParent(u) != findParent(v) ? "Not Same" : "Same");

	// if(findParent(u) != findParent(v))
	// 	cout<<"NO"<<endl;
	// else
	// 	cout<<"YES"<<endl;


