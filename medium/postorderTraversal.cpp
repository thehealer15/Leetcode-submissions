/*
4 ms	8.4 MB
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL)return v;
        stack<TreeNode* > s1,s2;
        s1.push(root);
        TreeNode* node=NULL;
        while(!s1.empty())
        {
            node=s1.top();s1.pop();
            s2.push(node);
            if(node->left)
                s1.push(node->left);
            if(node->right)
                s1.push(node->right);
        }
        while(!s2.empty())
        {
            v.push_back(s2.top()->val);s2.pop();
        }
        return v;
    }
};
