/*
 * Solved by Weslse
 * 2020.07.04
 */

 // Problem
 // 1486. XOR Operation in an Array
 // Given an integer n and an integer start.
 // Define an array nums where nums[i] = start + 2 * i(0 - indexed) and n == nums.length.
 // Return the bitwise XOR of all elements of nums.

 // RESULT
 // Runtime: 4 ms, faster than 19.71% of C++ online submissions for XOR Operation in an Array.
 // Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for XOR Operation in an Array.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	int xorOperation(int n, int start) {
		int result = start;
		for (int i = 1; i < n; i++)
			result ^= start + 2 * i;
		return result;
	}
};

int main() {
	int i1 = 5;
	int start = 0;

	Solution s;
	int o1 = s.xorOperation(i1, 0);

	cout << o1 << endl;

	return 0;
}