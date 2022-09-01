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
    int good(TreeNode* root,vector<int> path){
            if(root==NULL){
                    return 0;
            }
            int c=1;
            for(int i=0;i<path.size();i++){
            if(root->val < path[i]){
               c=0;
                    break;
            }
            }
            path.push_back(root->val);
            int left=good(root->left,path);
            int right=good(root->right,path);
            
            return c+left+right;
            
    }
    int goodNodes(TreeNode* root) {
            vector<int> path;
        return good(root,path);
    }
};