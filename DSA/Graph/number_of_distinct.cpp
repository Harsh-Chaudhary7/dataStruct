#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define vi vector<int>
#define ll long long
#define umi unordered_map<int,int>
#define ums unordered_map<char,int>


string temp;

void dfs(vector<vector<int>>& grid, int i, int j) {
	if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) {
		temp.pop_back();
		return;
	}


	if (grid[i][j] == 1) {
		grid[i][j] = 0;
		temp.push_back('t');
		dfs(grid, i - 1, j);
		temp.push_back('z');
		temp.push_back('d');
		dfs(grid, i + 1, j);
		temp.push_back('z');
		temp.push_back('r');
		dfs(grid, i, j + 1);
		temp.push_back('z');
		temp.push_back('l');
		dfs(grid, i, j - 1);
		temp.push_back('z');
	}


	return ;
	// int n = grid.size();
	// int m = grid[0].size();


	// grid[i][j] = 0;
	// if ((i - 1 >= 0) && grid[i - 1][j] == 1) {
	// 	temp.push_back('t');
	// 	dfs(grid, i - 1, j);
	// }

	// if ((i + 1 < n) && grid[i + 1][j] == 1) {
	// 	temp.push_back('d');
	// 	dfs(grid, i + 1, j);
	// }

	// if ((j + 1 < m) && grid[i][j + 1] == 1) {
	// 	temp.push_back('r');
	// 	dfs(grid, i, j + 1);
	// }

	// if ((j - 1 >= 0) && grid[i][j - 1] == 1) {
	// 	temp.push_back('l');
	// 	dfs(grid, i, j - 1);
	// }

	// temp.push_back('z');

	// return;

}

// Driver Code
int main()
{
	//code here
	int n, m;
	cin >> n >> m;

	vector<vector<int>> grid(n, (vector<int>(m)));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> grid[i][j];

	set<string> st;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 1) {
				temp.push_back('x');
				dfs(grid, i, j);
				st.insert(temp);
				// temp.clear();
			}
		}
	}


	cout << st.size();
	return 0;
}