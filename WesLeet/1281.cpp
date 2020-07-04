/*
 * Solved by Weslse
 * 2020.07.04
 */

 // Problem
 // 1281. Subtract the Product and Sum of Digits of an Integer
 // Given an integer number n, return the difference between the product of its digits and the sum of its digits.

 // RESULT
 // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
 // Memory Usage: 5.9 MB, less than 79.23% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	int subtractProductAndSum(int n) {
		string t = to_string(n);
		int mul = 1;
		int sum = 0;
		for (int i = 0; i < t.size(); i++) {
			mul *= (int)t[i] - '0';
			sum += (int)t[i] - '0';
		}
		return (mul - sum);
	}
};

int main() {
	int i1 = 234;

	Solution s;
	int o1 = s.subtractProductAndSum(i1);

	cout << o1 << endl;

	return 0;
}