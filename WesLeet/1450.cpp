/*
 * Solved by Weslse
 * 2020.07.08
 */

 // Problem
 // 1450. Number of Students Doing Homework at a Given Time
 // Given two integer arrays startTime and endTime and given an integer queryTime.
 // The ith student started doing their homework at the time startTime[i] and finished it at time endTime[i].
 // Return the number of students doing their homework at time queryTime.
 // More formally, return the number of students where queryTime lays in the interval[startTime[i], endTime[i]] inclusive.

 // RESULT
 // Runtime: 12 ms, faster than 19.88% of C++ online submissions for Number of Students Doing Homework at a Given Time.
 // Memory Usage: 11 MB, less than 55.56% of C++ online submissions for Number of Students Doing Homework at a Given Time.


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
		int studentCnt = 0;
		for (int i = 0; i < startTime.size(); ++i) {
			if (startTime[i] > queryTime || endTime[i] < queryTime) 
				continue;
			
			if (startTime[i] <= queryTime && endTime[i] >= queryTime)
				studentCnt++;
		}
		return studentCnt;
	}
};

int main() {
	vector<int> startTime = { 1, 2, 3 };
	vector<int> endTime = { 3, 2, 7 };
	int queryTime = 4;
	
	Solution s;
	int o1 = s.busyStudent(startTime, endTime, queryTime);

	cout << o1 << endl;

	return 0;
}