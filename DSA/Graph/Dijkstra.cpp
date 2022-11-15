#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define vi vector<int>
#define ll long long
#define umi unordered_map<int,int>
#define ums unordered_map<char,int>

class Solution {
public:

	vector<TreeNode*> allPossibleFBT(int n) {
		if (n % 2 == 0) return {};
		map<int, vector<TreeNode*>> mp;

		mp[1] = {new TreeNode(0)};

		for (int currn = 3; currn <= n; currn += 2) {
			int sum = currn - 1;
			int leftsum = 1, rightsum = sum - 1;
			while (leftsum <= sum) {
				for (auto leftnode : mp[leftsum]) {
					for (auto rightnode : mp[rightsum]) {
						TreeNode *rootnode = new TreeNode(0);
						rootnode->left = leftnode;
						rootnode->right = rightnode;
						mp[currn].push_back(rootnode);
					}
				}

				leftsum += 2;
				rightsum -= 2;
			}
		}

		return mp[n];
	}
};

void dijkstra(vector<pair<int, int> > g[], vector<int> &dist, int src) {
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>>> pq;
	dist[src] = 0;
	pq.push({0, src});

	while (!pq.empty()) {
		// int wt = pq.top().first;
		int node = pq.top().second;
		pq.pop();

		// vector<pair<int, int> >::iterator x
		for (auto x : g[node]) {
			if (x.second + dist[node] < dist[x.first]) {
				dist[x.first] = x.second + dist[node];
				pq.push({dist[x.first], x.first});

			}
		}
	}
}



// Driver Code
int main()
{
	int n = 5, m = 6, src = 1;
	vector<pair<int, int> > g[n + 1]; 	// assuming 1 based indexing of graph
	// Constructing the graph
	g[1].push_back({2, 2});
	g[1].push_back({4, 1});
	g[2].push_back({1, 2});
	g[2].push_back({5, 5});
	g[2].push_back({3, 4});
	g[3].push_back({2, 4});
	g[3].push_back({4, 3});
	g[3].push_back({5, 1});
	g[4].push_back({1, 1});
	g[4].push_back({3, 3});
	g[5].push_back({2, 5});
	g[5].push_back({3, 1});

	vector<int> dist(n + 1, 1e9);


	dijkstra(g, dist, src);

	for (int i = 1; i <= n; i++) {
		cout << dist[i] << " ";
	}
}