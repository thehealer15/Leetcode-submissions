/*

Runtime: 4 ms, faster than 8.14% of C++ online submissions for Middle of the Linked 
List.
Memory Usage: 6.6 MB, less than 84.52% of C++ online submissions for Middle of the Linked List.

ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* tmp=head;
        while(tmp){
            cnt++;
            tmp=tmp->next;
        }
        cnt/=2;
        while(cnt-- ){
            head=head->next;
        }
        return head;
    }

 */

// 2nd time:
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
Memory Usage: 6.5 MB, less than 98.48% of C++ online submissions for Middle of the Linked List

*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* tmp=head;
        int low=0,mid=0,high=0;
        while(head){
            high++;
            mid=(low+high)/2;
            head=head->next;
        }
        while(mid--){
            tmp=tmp->next;
        }
        return tmp;
    }
};
