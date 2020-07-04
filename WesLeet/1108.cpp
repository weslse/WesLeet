/*
 * Solved by Weslse
 * 2020.07.04
 */

 // Problem
 // Given a valid (IPv4) IP address, return a defanged version of that IP address.
 // A defanged IP address replaces every period "." with "[.]".

 // RESULT
 // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
 // Memory Usage : 5.9 MB, less than 68.85% of C++ online submissions for Defanging an IP Address.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	string defangIPaddr(string address) {
		string result;
		for (int i = 0; i < address.size(); ++i) {
			string tmp;
			if (address[i] == '.')
				tmp = "[.]";
			else
				tmp = address[i];
			result.append(tmp);
		}
		return result;
	}
};

int main() {
	string i1 = "1.1.1.1";

	Solution s;
	string o1 = s.defangIPaddr(i1);

	cout << o1 << endl;

	return 0;
}