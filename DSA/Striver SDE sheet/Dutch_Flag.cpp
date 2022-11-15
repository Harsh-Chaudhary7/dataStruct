#include <iostream>
using namespace std;

// Function to check if N contains
// digit D in it
// bool findDigit(int N, int D)
// {
// 	// Iterate until N is positive
// 	while (N > 0) {

// 		// Find the last digit
// 		int a = N % 10;

// 		// If the last digit is the
// 		// same as digit D
// 		if (a == D) {
// 			return true;
// 		}

// 		N /= 10;
// 	}

// 	// Return false
// 	return false;
// }

// // Function to check if the value of
// // N can be represented as sum of
// // integers having digit d in it
// bool check(int N, int D)
// {
// 	// Iterate until N is positive
// 	while (N > 0) {

// 		// Check if N contains digit
// 		// D or not
// 		if (findDigit(N, D) == true) {
// 			return true;
// 		}

// 		// Subtracting D from N
// 		N -= D;
// 	}

// 	// Return false
// 	return false;
// }
vector<int> dijkstra(vector<pair<int, int> > g, int n, int m, vector<int> &dist) {
	dist[1] = 0;


}


// Driver Code
int main()
{
	// int N = 25;
	// int D = 7;
	// if (check(N, D)) {
	// 	cout << "Yes";
	// }
	// else {
	// 	cout << "No";
	// }

	int n = 5, m = 6, source = 1;
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

	dijkstra(g, n, m, dist);
}