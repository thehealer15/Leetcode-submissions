/**
Runtime: 12 ms, faster than 99.40% of C++ online submissions for Palindrome Linked List.
Memory Usage: 15.1 MB, less than 23.23% of C++ online submissions for Palindrome Linked List.
https://leetcode.com/problems/palindrome-linked-list
 */
class Solution {
    
    vector<int> v;
public:
    Solution(){
        v.reserve(12);
    }
    bool isPalindrome(ListNode* head) {
        if(!head)return true;
        ListNode* tmp=head;
        while(tmp){
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        for(int i=0;i<=v.size()/2;i++){
            if(v[i]==v[v.size()-i-1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
