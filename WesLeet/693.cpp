/*
 * Solved by Weslse
 * 2020.07.09
 */

 // Problem
 // 693. Binary Number with Alternating Bits
 // Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

 // RESULT
 // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Number with Alternating Bits.
 // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Number with Alternating Bits.


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool hasAlternatingBits(int n) {
		int r1 = n % 2;
		n /= 2;
		while (n > 1) {
			int r2 = n % 2;
			if (r1 == r2)
				return false;
			n /= 2;
			r1 = r2;
		}
		if (r1 == n)
			return false;
		return true;
	}
};

int main() {
	int n = 10;
	Solution s;
	bool o1 = s.hasAlternatingBits(n);

	cout << o1 << endl;

	return 0;
}