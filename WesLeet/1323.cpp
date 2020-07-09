/*
 * Solved by Weslse
 * 2020.07.09
 */

 // Problem
 // 1323. Maximum 69 Number
 // Given a positive integer num consisting only of digits 6 and 9.
 // Return the maximum number you can get by changing at most one digit(6 becomes 9, and 9 becomes 6).

 // RESULT
 // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
 // Memory Usage: 5.9 MB, less than 75.75% of C++ online submissions for Maximum 69 Number.


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int maximum69Number(int num) {
		int maxNum = num;
		int tmp = num;
		for (int i = 10000; i >= 1; i /= 10) {
			if ((tmp / i) == 0)
				continue;
			int tmpNum = 0;
			if (tmp / i == 6) {
				tmpNum = num - 6 * i + 9 * i;
			}
			else if (tmp / i == 9) {
				tmpNum = num - 9 * i + 6 * i;
			}

			if (tmpNum > maxNum)
				maxNum = tmpNum;
			tmp %= i;
		}
		return maxNum;
	}
};

int main() {
	int num = 9669;

	Solution s;
	int o1 = s.maximum69Number(num);

	cout << (int)o1 << endl;

	return 0;
}