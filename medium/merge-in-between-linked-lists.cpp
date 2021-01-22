/*
Link: https://leetcode.com/problems/merge-in-between-linked-lists/

:::::::Verdict::::::::
Runtime: 280 ms, faster than 98.38% of C++ online submissions for Merge In Between Linked Lists.
Memory Usage: 95 MB, less than 24.29% of C++ online submissions for Merge In Between Linked Lists

::::::::::::::::::::::::::::Approch::::::::::::::::::::::::::::

1. Go to previous node of node we have to removed 
2. put head of l2 in `tail` of our required node
3. now go to last node of l2 as we need to merge another end too
4. for list1, go to node with tail pointer (make tail free as soon as we advance)
5. now for bth node -> in list2's next put b+1th node 

::::::::::::::::::::::::::::Complexity::::::::::::::::::::::::::::

time =>O(N) : l1, l2 traversed completely i.e.
Space=>O(1) : This solution is not using internal stack or extra memory

*/

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tmp=list1;
        ListNode* tail=NULL;
        b=b-a+1; // maniulating length of list to remove
        
        while(a--){
            tail=tmp;
            tmp=tmp->next;
        }
        
        tail->next=list2;
//         one end joined here
        
        while(b--){ // till we go to other end
            tail=tmp;
            tmp=tmp->next;  
            delete tail; // tail removed
        }
        
        while(list2->next!=NULL)// go to end of l2
                list2=list2->next; 
            
        list2->next=tmp; // joining other end
        return list1;
    }
};
