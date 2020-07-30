/*
 * Solved by Weslse
 * 2020.07.30
 */

 // Problem
 // 1184. Distance Between Bus Stops
 // A bus has n stops numbered from 0 to n - 1 that form a circle. 
 // We know the distance between all pairs of neighboring stops where distance[i] is the distance between the stops number i and (i + 1) % n.
 // The bus goes along both directions i.e.clockwise and counterclockwise.
 // Return the shortest distance between the given start and destination stops.

 // RESULT
 // Runtime: 4 ms, faster than 98.79% of C++ online submissions for Distance Between Bus Stops.
 // Memory Usage: 8.9 MB, less than 23.53% of C++ online submissions for Distance Between Bus Stops.


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


class Solution {
public:
	int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
		// clockwise
		int cw_minDist = 0;
		int i = start;
		while (true) {
			if (i == destination)
				break;
	
			cw_minDist += distance[i];
			i++;
			if (i >= distance.size())
				i = 0;
		}

		// counterclockwise
		int ccw_minDist = 0;
		i = start;
		while (true) {
			if (i == destination)
				break;

			i--;
			if (i < 0)
				i = distance.size() - 1;
			ccw_minDist += distance[i];
		}
		int minDist = min(cw_minDist, ccw_minDist);
		return minDist;
	}
};

int main() {
	vector<int> d = { 1,2,3,4 };
	int start = 0;
	int dest = 3;
	Solution s;
	cout << s.distanceBetweenBusStops(d, start, dest) << endl;
}