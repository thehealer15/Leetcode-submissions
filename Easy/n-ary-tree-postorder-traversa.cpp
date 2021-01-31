/*
https://leetcode.com/problems/n-ary-tree-postorder-traversal/
Runtime: 32 ms, faster than 73.13% of C++ online submissions for N-ary Tree Postorder Traversal.
Memory Usage: 11.2 MB, less than 89.41% of C++ online submissions for N-ary Tree Postorder Traversal.
*/

class Solution {
vector<int> v;
    public:
    
    void fill_vect(Node* root){
        if(root){
            for(int i=0;i<root->children.size();i++){
                fill_vect(root->children[i]);
                v.push_back(root->children[i]->val);
            }
        }
       else return;
    }
    
    vector<int> postorder(Node* root) {
        if(!root){
            return v;
        }
        fill_vect(root);
        v.push_back(root->val);    
        return v;
    } 
};
