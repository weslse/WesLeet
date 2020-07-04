/*
 * Solved by Weslse
 * 2020.07.04
 */

 // Problem
 // 1365. How Many Numbers Are Smaller Than the Current Number
 // Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
 // That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
 // Return the answer in an array.

 // RESULT
 // Runtime: 88 ms, faster than 5.19% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
 // Memory Usage: 10.4 MB, less than 43.30% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int cnt = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > nums[j])
                    cnt++;
            }
            result.push_back(cnt);
        }
        return result;
    }
};

int main() {
	vector<int> i1 = { 8,1,2,2,3 };

	Solution s;
	vector<int> o1 = s.smallerNumbersThanCurrent(i1);

	for(int i : o1)
		cout << i;
	cout << endl;

	return 0;
}