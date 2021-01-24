/**
Runtime: 88 ms, faster than 93.56% of C++ online submissions for Sort List.
Memory Usage: 31.1 MB, less than 39.97% of C++ online submissions for Sort List.
https://leetcode.com/problems/sort-list
 */
class Solution {
    vector<int> v;
    public:
    Solution(){
        v.reserve(100002);
    }
    ListNode* sortList(ListNode* head) {
        ListNode* tmp=head;
        while(tmp){
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        sort(v.begin(),v.end());
        tmp=head;
        int i=0;
        while(tmp){
            tmp->val=v[i++];
            tmp=tmp->next;
        }return head;
    }
};
