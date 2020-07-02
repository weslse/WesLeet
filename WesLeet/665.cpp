/*
 * Solved by Weslse
 * 2020.07.02
 */

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// Problem
// Given an array nums with n integers, your task is to check if it could become non - decreasing by modifying at most 1 element.
// We define an array is non - decreasing if nums[i] <= nums[i + 1] holds for every i(0 - based) such that(0 <= i <= n - 2).

// RESULT
// Runtime: 56 ms, faster than 86.25% of C++ online submissions for Non-decreasing Array.
// Memory Usage : 27.1 MB, less than 39.94% of C++ online submissions for Non - decreasing Array.

class Solution {
public:
	bool checkPossibility(vector<int>& nums) {
		if (nums.size() == 1)
			return true;
		bool changed = false;
		for (int i = 0; i <= nums.size() - 1; i++) {
			if (i == 0) {
				if (nums[i] > nums[i + 1]) {
					nums[i] = nums[i + 1];
					changed = true;
					break;
				}
			}
			else if (i == nums.size() - 1) {
				if (nums[i - 1] > nums[i]) {
					nums[i] = nums[i - 1];
					changed = true;
					break;
				}
			}
			else {
				if ((nums[i - 1] > nums[i] && nums[i] < nums[i + 1])) {
					nums[i] = nums[i + 1];
					changed = true;
					break;
				}
				else if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1] && nums[i - 1] <= nums[i + 1]) {
					nums[i] = nums[i - 1];
					changed = true;
					break;
				}
			}
		}

		if (!changed) {
			for (int i = 0; i < nums.size() - 1; i++) {
				if (nums[i] > nums[i + 1])
					return false;
			}
			return true;
		}

		for (int i = 0; i < nums.size() - 1; i++) {
			if (nums[i] > nums[i + 1])
				return false;
		}

		return true;
	}
};

int main() {
	vector<int> i1 = { 4,2,3 };
	vector<int> i2 = { 4,2,1 };
	vector<int> i3 = { 3, 3, 2, 2 };
	vector<int> i4 = { 2,3,3,2,4 };
	vector<int> i5 = { 1,2,4,5,3 };
	vector<int> i6 = { 1 };

	Solution s;
	if (s.checkPossibility(i1))
		printf("true\n"); // answer
	else
		printf("false\n");

	if (s.checkPossibility(i2))
		printf("true\n");
	else
		printf("false\n"); // answer

	if (s.checkPossibility(i3))
		printf("true\n");
	else
		printf("false\n"); // answer

	if (s.checkPossibility(i4))
		printf("true\n"); // answer
	else
		printf("false\n");

	if (s.checkPossibility(i5))
		printf("true\n"); // answer
	else
		printf("false\n");
	
	if (s.checkPossibility(i6))
		printf("true\n"); // answer
	else
		printf("false\n");
}