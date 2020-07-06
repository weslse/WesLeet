/*
 * Solved by Weslse
 * 2020.07.06
 */

 // Problem
 // 709. To Lower Case
 // Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

 // RESULT
 // Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
 // Memory Usage: 6 MB, less than 79.77% of C++ online submissions for To Lower Case.


#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string toLowerCase(string str) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		return str;
	}
};

int main() {
	string i1 = "Hello";

	Solution s;
	string o1 = s.toLowerCase(i1);

	cout << o1 << endl;

	return 0;
}