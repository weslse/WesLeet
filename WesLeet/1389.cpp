/*
 * Solved by Weslse
 * 2020.07.05
 */

 // Problem
 // 1389. Create Target Array in the Given Order
 // Given two arrays of integers nums and index. Your task is to create target array under the following rules:
 // Initially target array is empty.
 // From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
 // Repeat the previous step until there are no elements to read in nums and index.
 // Return the target array.

 // It is guaranteed that the insertion operations will be valid.

 // RESULT
 // Runtime: 4 ms, faster than 67.47% of C++ online submissions for Create Target Array in the Given Order.
 // Memory Usage: 8.6 MB, less than 24.56% of C++ online submissions for Create Target Array in the Given Order.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
		vector<int> target;
		for (int i = 0; i < nums.size(); i++)
			target.insert(target.begin() + index[i], nums[i]);
		return target;
	}
};

int main() {
	vector<int> i1 = { 0, 1, 2, 3, 4 };
	vector<int> index = { 0, 1, 2, 2, 1 };

	Solution s;
	vector<int> o1 = s.createTargetArray(i1, index);

	for (auto i : o1)
		cout << i << ' ';
	cout << endl;

	return 0;
}