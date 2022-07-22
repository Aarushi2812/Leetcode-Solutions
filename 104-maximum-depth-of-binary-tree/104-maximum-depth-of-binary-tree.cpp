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
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
            if(root==NULL){
                    return 0;
            }
            int l,j;l=0;j=0;
            if(root->left !=NULL)
             l=maxDepth(root->left);
            if(root->right !=NULL)
             j=maxDepth(root->right);
            
            if(l>j){
                    return l+1;
            }
            return j+1;
        
    }
};