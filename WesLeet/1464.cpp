/*
 * Solved by Weslse
 * 2020.07.08
 */

 // Problem
 // 1464. Maximum Product of Two Elements in an Array
 // Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).

 // RESULT
 // Runtime: 4 ms, faster than 99.71% of C++ online submissions for Maximum Product of Two Elements in an Array.
 // Memory Usage: 10 MB, less than 77.08% of C++ online submissions for Maximum Product of Two Elements in an Array.


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int maxIdx = 0, secondMaxIdx = 1;
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] >= nums[maxIdx]) {
				secondMaxIdx = maxIdx;
				maxIdx = i;
				continue;
			}
			if (nums[i] > nums[secondMaxIdx] && nums[i] < nums[maxIdx]) {
				secondMaxIdx = i;
			}
		}
		return (nums[maxIdx] - 1) * (nums[secondMaxIdx] - 1);
	}
};

int main() {
	vector<int> nums = { 3,4,5,2 };
	vector<int> nums2 = { 10, 2, 5, 2 };
	vector<int> nums3 = { 1,5,4,5 };

	Solution s;
	int o1 = s.maxProduct(nums3);

	cout << o1 << endl;

	return 0;
}