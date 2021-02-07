// Runtime: 8 ms, faster than 76.38% of C++ online submissions for Intersection of Two Arrays.
// Memory Usage: 10.3 MB, less than 85.12% of C++ online submissions for Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    int binary_search(vector<int>& n,int key){
        int index=-1;
        if(n.size()==1) return key==n[0];
        if(n.size()>1){
            int low=0,high=n.size()-1;
            while(low<=high){
                int mid=low+(high-mid)/2;
                if(n[mid]==key){
                    index=mid; return mid;
                }
                else if(n[mid]>key)
                {
                     high=mid-1;
                    continue;
                }   
                else{
                    low=mid+1;
                    continue;
                }   
            }   
        }        
        return index;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int> inter;
        if(nums1.size()<nums2.size()){
            for(int i=0;i<nums1.size();i++)
                if(binary_search(nums2,nums1[i])!=-1)
                    inter.insert(nums1[i]);
        }
        else{
                for(int i=0;i<nums2.size();i++)
                if(binary_search(nums1,nums2[i])!=-1)
                    inter.insert(nums2[i]);
        }
        
        vector<int> v;
        v.assign(inter.begin(), inter.end());
        return v;
    }
};
