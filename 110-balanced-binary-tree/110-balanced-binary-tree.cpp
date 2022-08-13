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
    int length(TreeNode* root){
       if(root==NULL){
               return 0;
       }
            int l=length(root->left);
            int r=length(root->right);
            
            if(l>r){
                    return l+1;
            }
            return r+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL){
                return true;
        }
         int lh=length(root->left);
         int rh=length(root->right);
         int j=lh-rh;
         
         
         bool l=isBalanced(root->left);
         bool r=isBalanced(root->right);
         if((j==1 || j==-1 ||j==0) and l and r  ){
            return true;     
         }
            return false;
         
    }
};