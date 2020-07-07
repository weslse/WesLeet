/*
 * Solved by Weslse
 * 2020.07.08
 */

 // Problem
 // 1252. Cells with Odd Values in a Matrix
 // Given n and m which are the dimensions of a matrix initialized by zeros and given an array indices where indices[i] = [ri, ci]. 
 // For each pair of [ri, ci] you have to increment all cells in row ri and column ci by 1.
 // Return the number of cells with odd values in the matrix after applying the increment to all indices.

 // RESULT
 // Runtime: 12 ms, faster than 19.55% of C++ online submissions for Cells with Odd Values in a Matrix.
 // Memory Usage: 8 MB, less than 60.43% of C++ online submissions for Cells with Odd Values in a Matrix.


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int oddCells(int n, int m, vector<vector<int>>& indices) {
		vector<int> matrix(n*m, 0);

		for (size_t i = 0; i < indices.size(); i++) {
			for (size_t x = 0; x < m; x++)
				matrix[indices[i][0] * m + x]++;

			for (size_t y = 0; y < n; y++)
				matrix[y * m + indices[i][1]]++;
		}

		int oddCnt = 0;
		for (int a : matrix)
			if (a % 2)
				oddCnt++;

		return oddCnt;
	}
};

int main() {
	int n = 2, m = 3;
	vector<vector<int>> indices = { {0, 1}, {1, 1} };

	Solution s;
	int o1 = s.oddCells(n, m, indices);

	cout << o1 << endl;

	return 0;
}