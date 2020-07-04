/*
 * Solved by Weslse
 * 2020.07.04
 */

 // Problem
 // 1342. Number of Steps to Reduce a Number to Zero
 // Given a non-negative integer num, return the number of steps to reduce it to zero. 
 // If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

 // RESULT
 // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
 // Memory Usage : 5.9 MB, less than 76.35% of C++ online submissions for Number of Steps to Reduce a Number to Zero.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	int numberOfSteps(int num) {
		int c = 0;
		while (num > 0) {
			if (num % 2 == 0)
				num /= 2;
			else
				num -= 1;
			c++;
		}
		return c;
	}
};

int main() {
	int i1 = 123;

	Solution s;
	int o1 = s.numberOfSteps(i1);

	cout << o1 << endl;

	return 0;
}