/*
 * Solved by Weslse
 * 2020.07.03
 */

 // Problem
 // 1431. Kids With the Greatest Number of Candies
 // Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
 // For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them.
 // Notice that multiple kids can have the greatest number of candies.

 // RESULT
 // Runtime: 8 ms, faster than 13.74% of C++ online submissions for Kids With the Greatest Number of Candies.
 // Memory Usage : 8.9 MB, less than 91.46% of C++ online submissions for Kids With the Greatest Number of Candies.


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		vector<bool> result;
		for (int i = 0; i < candies.size(); ++i) {
			bool isGreatest = true;
			candies[i] += extraCandies;
			for (int j = 0; j < candies.size(); ++j) {
				if (candies[i] < candies[j]) {
					isGreatest ^= isGreatest;
					break;
				}
			}
			result.push_back(isGreatest);
			candies[i] -= extraCandies;
		}
		return result;
	}
};

int main() {
	vector<int> i1 = { 2,3,5,1,3 };
	int extraCandies = 3;

	Solution s;
	vector<bool> o1 = s.kidsWithCandies(i1, extraCandies);
	for (auto a : o1)
		if (a)
			cout << "true ";
		else
			cout << "false ";

	cout << endl;

	return 0;
}