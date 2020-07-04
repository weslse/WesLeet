/*
 * Solved by Weslse
 * 2020.07.04
 */

 // Problem
 // 1313. Decompress Run-Length Encoded List
 // We are given a list nums of integers representing a list compressed with run-length encoding.
 // Consider each adjacent pair of elements[freq, val] = [nums[2 * i], nums[2 * i + 1]](with i >= 0).
 // For each such pair, there are freq elements with value val concatenated in a sublist.
 // Concatenate all the sublists from left to right to generate the decompressed list.
 // Return the decompressed list.

 // RESULT
 // Runtime: 12 ms, faster than 16.14% of C++ online submissions for Decompress Run-Length Encoded List.
 // Memory Usage: 11.4 MB, less than 5.05% of C++ online submissions for Decompress Run-Length Encoded List.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	vector<int> decompressRLElist(vector<int>& nums) {
		vector<int> result;
		for (int i = 0; i < nums.size(); i += 2) {
			vector<int> tmp;
			int freq = nums[i];
			int val = nums[i + 1];
			for (int j = 0; j < freq; j++)
				tmp.push_back(val);
			result.insert(result.end(), tmp.begin(), tmp.end()); // concat
		}
		return result;
	}
};

int main() {
	vector<int> i1 = { 1,2,3,4 };

	Solution s;
	vector<int> o1 = s.decompressRLElist(i1);

	for (int i : o1)
		cout << i;
	cout << endl;

	return 0;
}