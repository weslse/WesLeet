/*
 * Solved by Weslse
 * 2020.07.05
 */

 // Problem
 // 1502. Can Make Arithmetic Progression From Sequence
 // Given an array of numbers arr. 
 // A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
 // Return true if the array can be rearranged to form an arithmetic progression, otherwise, return false.

 // RESULT
 // Runtime: 12 ms, faster than 75.00% of C++ online submissions for Can Make Arithmetic Progression From Sequence.
 // Memory Usage: 8.7 MB, less than 100.00% of C++ online submissions for Can Make Arithmetic Progression From Sequence.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	bool canMakeArithmeticProgression(vector<int>& arr) {
		std::sort(arr.begin(), arr.end());
		int diff = arr[1] - arr[0];
		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] - arr[i - 1] != diff)
				return false;
		}
		return true;
	}
};

int main() {
	vector<int> i1 = { 2,4,1 };

	Solution s;
	int o1 = s.canMakeArithmeticProgression(i1);

	cout << o1 << endl;

	return 0;
}