#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define vi vector<int>
#define ll long long
#define umi unordered_map<int,int>
#define ums unordered_map<char,int>


vector<int> rnk(1000001);
vector<int> parent(1000001);

struct node {
	int u;
	int v;
	int wt;
	node(int first, int second, int weight) {
		u = first;
		v = second;
		wt = weight;
	}
};


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

bool comp(node a, node b) {
	return a.wt < b.wt;
}

// Driver Code
int main()
{
	int n = 5, m = 6;

	for (int i = 0; i < n; i++) {
		parent[i] = i;
		rnk[i] = 0;
	}



	vector<node> edges;
	edges.push_back(node(0, 1, 2));
	edges.push_back(node(0, 3, 6));
	edges.push_back(node(1, 0, 2));
	edges.push_back(node(1, 2, 3));
	edges.push_back(node(1, 3, 8));
	edges.push_back(node(1, 4, 5));
	edges.push_back(node(2, 1, 3));
	edges.push_back(node(2, 4, 7));
	edges.push_back(node(3, 0, 6));
	edges.push_back(node(3, 1, 8));
	edges.push_back(node(4, 1, 5));
	edges.push_back(node(4, 2, 7));
	sort(edges.begin(), edges.end(), comp);

	vector<pair<int, int>> mst;
	int cost = 0;

	for (auto it : edges) {
		if (findParent(it.v) != findParent(it.u)) {
			cost += it.wt;
			un(it.u, it.v);
			mst.push_back({it.u, it.v});
		}
	}

	cout << cost << endl;

	for (auto it : mst) {
		cout << it.first << "-" << it.second << endl;
	}
	return 0;
}