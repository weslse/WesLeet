/*
 * Solved by Weslse
 * 2020.07.03
 */

 // Problem
 // 1480. Running Sum of 1d Array
 // Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]¡¦nums[i]).
 // Return the running sum of nums.

 // RESULT
 // Runtime: 12 ms, faster than 14.26% of C++ online submissions for Running Sum of 1d Array.
 // Memory Usage : 8.8 MB, less than 20.00% of C++ online submissions for Running Sum of 1d Array.


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	vector<int> runningSum(vector<int>& nums) {
		vector<int> result;
		for (int i = 0; i < nums.size(); ++i) {
			int sum = 0;
			for (int j = 0; j <= i; ++j) {
				sum += nums[j];
			}
			result.push_back(sum);
		}
		return result;
	}
};

int main() {
	vector<int> i1 = { 1,2,3,4 };

	Solution s;
	vector<int> o1 = s.runningSum(i1);
	for (auto a : o1)
		cout << a << ' ';
	
	cout << endl;
	
	return 0;
}