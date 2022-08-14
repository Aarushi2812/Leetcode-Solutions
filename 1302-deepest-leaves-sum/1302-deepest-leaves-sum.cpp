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
    
    int height(TreeNode* root){
            if(root==NULL){
                    return 0;
            }
            
            return 1+max(height(root->right),height(root->left));
    }    
    
    int leafSum(TreeNode* root,int clev ,int h){
           if(root==NULL){
                   return 0;
           } 
           if(clev==h){
                   return root->val;
           }
            
           int l=leafSum(root->left, clev+1, h);
           int r=leafSum(root->right, clev+1, h); 
            
            return l+r;
    }    
    int deepestLeavesSum(TreeNode* root) {
            if(root==NULL){
                    return 0; 
            }
            int h=height(root);
            
        return leafSum(root,1,h);
    }
};