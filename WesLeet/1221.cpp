/*
 * Solved by Weslse
 * 2020.07.05
 */

 // Problem
 // 1221. Split a String in Balanced Strings
 // Balanced strings are those who have equal quantity of 'L' and 'R' characters.
 // Given a balanced string s split it in the maximum amount of balanced strings.
 // Return the maximum amount of splitted balanced strings.

 // RESULT
 // Runtime: 4 ms, faster than 19.41% of C++ online submissions for Split a String in Balanced Strings.
 // Memory Usage: 6.2 MB, less than 66.64% of C++ online submissions for Split a String in Balanced Strings.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	int balancedStringSplit(string s) {
		int rCnt = 0, lCnt = 0, bCnt = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'R')
				rCnt++;
			if (s[i] == 'L')
				lCnt++;
			if (!(rCnt - lCnt))
				bCnt++;
		}
		return bCnt;
	}
};

int main() {
	string i1 = "RLLLLRRRLR";

	Solution s;
	int o1 = s.balancedStringSplit(i1);

	cout << o1 << endl;

	return 0;
}