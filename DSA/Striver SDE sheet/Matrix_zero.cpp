#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>;
#define long long long;
#define umi unordered_map<int,int> ;
#define ums unordered_map<char,int>;


// void solve() {
// 	vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
// 	int row = matrix.size(), col = matrix[0].size();

// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {
// 			if (matrix[i][j] == 0) {

// 				int ind = i - 1;
// 				while (ind >= 0) {
// 					if (matrix[ind][j] != 0) {
// 						matrix[ind][j] = -1;
// 					}
// 					ind--;
// 				}
// 				ind = i + 1;
// 				while (ind < row) {
// 					if (matrix[ind][j] != 0) {
// 						matrix[ind][j] = -1;
// 					}
// 					ind++;
// 				}
// 				ind = j - 1;
// 				while (ind >= 0) {
// 					if (matrix[i][ind] != 0) {
// 						matrix[i][ind] = -1;

// 					}
// 					ind--;
// 				}
// 				ind = j + 1;
// 				while (ind < col) {
// 					if (matrix[i][ind] != 0) {
// 						matrix[i][ind] = -1;

// 					}
// 					ind++;
// 				}
// 			}
// 		}
// 		for (int i = 0; i < row; i++) {
// 			for (int j = 0; j < col; j++) {
// 				if (matrix[i][j] <= 0) {
// 					matrix[i][j] = 0;
// 				}
// 			}
// 		}
// 	}

// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {
// 			if (matrix[i][j] <= 0)
// 				matrix[i][j] = 0;
// 		}
// 	}

// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {

// 			cout << matrix[i][j] << " ";
// 		}
// 		cout << endl;
// 	}

// }

void solve() {
	vector<vector<int>> mat = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
	int row = mat.size(), col = mat[0].size();

	vector<int> d1(row, 1), d2(col, 1);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (mat[i][j] == 0) {
				d1[i] = 0;
				d2[j] = 0;
			}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (d1[i] == 0 || d2[j] == 0)
				mat[i][j] = 0;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

}
int main() {

	// ll t;
	// cin>>t;
	// while(t--)
	solve();
	return 0;
}