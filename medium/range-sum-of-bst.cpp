/*
link-https://leetcode.com/problems/range-sum-of-bst/

Runtime: 124 ms, faster than 99.38% of C++ online submissions for Range Sum of BST.
Memory Usage: 64.8 MB, less than 98.44% of C++ online submissions for Range Sum of BST.

Akshay Pawar 
:)

*/

class Solution {
public:
    int sum;
    Solution(){
        sum=0;
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root){
            if(root->val>=low && root->val<=high)
            {
                sum+=root->val;
            }
            rangeSumBST(root->left,low,high);
            rangeSumBST(root->right,low,high);
        }
         return sum;
    }
};
