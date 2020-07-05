/*
 * Solved by Weslse
 * 2020.07.05
 */

 // Problem
 // 1266. Minimum Time Visiting All Points
 // On a plane there are n points with integer coordinates points[i] = [xi, yi]. 
 // Your task is to find the minimum time in seconds to visit all points.
 // You can move according to the next rules :
 //   In one second always you can either move vertically, horizontally by one unit or diagonally(it means to move one unit vertically and one unit horizontally in one second).
 //   You have to visit the points in the same order as they appear in the array.

 // RESULT
 // Runtime: 24 ms, faster than 19.13% of C++ online submissions for Minimum Time Visiting All Points.
 // Memory Usage: 10.6 MB, less than 13.67% of C++ online submissions for Minimum Time Visiting All Points.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	int minTimeToVisitAllPoints(vector<vector<int>>& points) {
		int minMoveTime = 0;
		vector<int> startPoint = points[0];
		for (int i = 1; i < points.size(); i++) {
			int diffX = points[i][0] - startPoint[0];
			diffX = diffX > 0 ? diffX : -diffX;

			int diffY = points[i][1] - startPoint[1];
			diffY = diffY > 0 ? diffY : -diffY;

			if (diffX == 0)
				minMoveTime += diffY;
			else if (diffY == 0)
				minMoveTime += diffX;
			else
				minMoveTime += (diffX < diffY) ? (diffX + diffY - diffX) : (diffY + diffX - diffY);
			startPoint = points[i];
		}
		return minMoveTime;
	}
};

int main() {
	vector<vector<int>> i1 = { { 1, 1 }, { 3, 4 }, { -1, 0 } };

	Solution s;
	int o1 = s.minTimeToVisitAllPoints(i1);

	cout << o1 << endl;

	return 0;
}