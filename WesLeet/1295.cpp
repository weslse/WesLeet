/*
 * Solved by Weslse
 * 2020.07.05
 */

 // Problem
 // 1295. Find Numbers with Even Number of Digits
 // Given an array nums of integers, return how many of them contain an even number of digits.

 // RESULT
 // Runtime: 12 ms, faster than 71.45% of C++ online submissions for Find Numbers with Even Number of Digits.
 // Memory Usage: 10.2 MB, less than 8.13% of C++ online submissions for Find Numbers with Even Number of Digits.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	int findNumbers(vector<int>& nums) {
		int evenCnt = 0;
		for (int i = 0; i < nums.size(); i++) {
			int num = nums[i];
			int digitCnt = 0;
			for (int d = 1; d <= 100000; d *= 10) {
				if ((num / d) > 0)
					digitCnt++;
			}
			if (digitCnt % 2 == 0)
				evenCnt++;
		}
		return evenCnt;
	}
};

int main() {
	vector<int> i1 = { 12,345,2,6,7896 };

	Solution s;
	int o1 = s.findNumbers(i1);

	cout << o1 << endl;

	return 0;
}