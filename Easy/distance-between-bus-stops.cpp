/*
https://leetcode.com/problems/distance-between-bus-stops
Runtime: 4 ms, faster than 90.72% of C++ online submissions for Distance Between Bus Stops.

Memory Usage: 8.6 MB, less than 96.29% of C++ online submissions for Distance Between Bus Stops.
*/
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int clock_wise=0,anti_clock_wise=0;
        if(start>destination) swap(start,destination);
        for(int i=start;i<destination;i++)
            clock_wise+=distance[i];
        
        for(int i=destination;i!=start;i=(i+1)%distance.size()){
            anti_clock_wise+=distance[i];
        }
        return min(anti_clock_wise,clock_wise);
    }
};
