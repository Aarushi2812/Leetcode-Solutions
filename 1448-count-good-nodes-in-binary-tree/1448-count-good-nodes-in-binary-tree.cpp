/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
**/ 
class Solution {
public:
    int good(TreeNode* root,int max){
            if(root==NULL){
                    return 0;
            }
            int c=0;
            if(root->val>=max){
                    max=root->val;
                    c=1;
            }
            int left=good(root->left,max);
            int right=good(root->right,max);
            
            return c+left+right;
            
    }
    int goodNodes(TreeNode* root) {
            vector<int> path;
        return good(root,root->val);
    }
};