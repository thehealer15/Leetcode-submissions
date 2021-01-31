/*
https://leetcode.com/problems/n-ary-tree-preorder-traversal
Runtime: 36 ms, faster than 58.88% of C++ online submissions for N-ary Tree Preorder Traversal.
Memory Usage: 11.1 MB, less than 95.51% of C++ online submissions for N-ary Tree Preorder Traversal.
*/

class Solution {
    vector<int> v;
    public:
    void fill_vect(Node*root){
        if(root){
            for(int i=0;i<root->children.size();i++ ){
                v.push_back(root->children[i]->val);
                fill_vect(root->children[i]);
            }
        }
        else return ;
    }
    vector<int> preorder(Node* root) {
        if(root){
            v.push_back(root->val);
            fill_vect(root);
        }
        return v;
    }
};
