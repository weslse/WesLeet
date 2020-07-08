/*
 * Solved by Weslse
 * 2020.07.09
 */

 // Problem
 // 415. Add Strings
 // Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

 // RESULT
 // Runtime: 16 ms, faster than 45.49% of C++ online submissions for Add Strings.
 // Memory Usage: 6.8 MB, less than 52.23% of C++ online submissions for Add Strings.


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string addStrings(string num1, string num2) {
		string small, big, result;
		if (num1.size() > num2.size()) {
			big = num1;
			small = num2;
		}
		else {
			big = num2;
			small = num1;
		}
		result.resize(big.size() + 1);

		size_t sizeDiff = big.size() - small.size();
		for (size_t i = 0; i < sizeDiff; i++)
			small.insert(small.begin(), '0');

		int upper = 0;
		for (int i = big.size() - 1; i >= 0; i--) {
			int tmp = ((int)(big[i] - '0') + (int)(small[i] - '0'));
			if (upper == 1) {
				tmp += 1;
				upper = 0;
			}
			if (tmp >= 10) {	
				tmp %= 10;
				upper += 1;
			}
			result[i + 1] = (char)(tmp + '0');
		}

		if (upper == 1) {
			result[0] = '1';
		}
		else {
			result.erase(result.begin());
		}
		return result;
	}
};

int main() {
	string a = "6913259244";
	string b = "71103343";

	Solution s;
	string o1 = s.addStrings(a, b);

	cout << o1 << endl;

	return 0;
}