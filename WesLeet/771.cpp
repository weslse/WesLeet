/*
 * Solved by Weslse
 * 2020.07.04
 */

 // Problem
 // 771. Jewels and Stones
 // You're given strings J representing the types of stones that are jewels, and S representing the stones you have.
 // Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
 // The letters in J are guaranteed distinct, and all characters in J and S are letters.
 // Letters are case sensitive, so "a" is considered a different type of stone from "A".

 // RESULT
 // Runtime: 4 ms, faster than 65.74% of C++ online submissions for Jewels and Stones.
 // Memory Usage : 6.2 MB, less than 68.92% of C++ online submissions for Jewels and Stones.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int cnt = 0;
		for (int i = 0; i < J.size(); i++)
			for (int j = 0; j < S.size(); j++)
				if (J[i] == S[j])
					cnt++;
		return cnt;
	}
};

int main() {
	string J = "aA", S = "aAAbbbb";

	Solution s;
	int o1 = s.numJewelsInStones(J, S);

	cout << o1 << endl;

	return 0;
}