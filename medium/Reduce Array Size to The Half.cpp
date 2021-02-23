./*

Runtime: 276 ms, faster than 28.26% of C++ online submissions for Reduce Array Size to The Half.
Memory Usage: 80 MB, less than 73.62% of C++ online submissions for Reduce Array Size to The Half
https://leetcode.com/problems/reduce-array-size-to-the-half
*/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
     int target=arr.size()/2;
      map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int cureent_sum=0,count=0;
        priority_queue<int> pq;
        for(auto i=m.begin();i!=m.end();i++)
        {
            pq.push(i->second);
        }
        
        while(cureent_sum<target){
            cureent_sum+=pq.top();pq.pop();
            count++;
       }
        
       return count; 
    }
};
