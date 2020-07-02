/*
 * Solved by Weslse
 * 2020.07.03
 */

 // Problem
 // 1470. Shuffle the Array
 // Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
 // Return the array in the form[x1, y1, x2, y2, ..., xn, yn].

 // RESULT
 // Runtime: 16 ms, faster than 30.93% of C++ online submissions for Shuffle the Array.
 // Memory Usage : 10.1 MB, less than 100.00% of C++ online submissions for Shuffle the Array.


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> result;
		for (int i = 0; i < n; ++i) {
			result.push_back(nums[i]);
			result.push_back(nums[n + i]);
		}
		return result;
	}
};

int main() {
	vector<int> i1 = { 2,5,1,3,4,7 };
	int n = 3;

	Solution s;
	vector<int> o1 = s.shuffle(i1, n);
	for (auto a : o1)
		cout << a << ' ';

	cout << endl;

	return 0;
}