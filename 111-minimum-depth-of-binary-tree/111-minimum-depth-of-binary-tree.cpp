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
        
    int minDepth(TreeNode* root) {
        if(root==NULL){
                        return 0;
                }
            
                int dr=minDepth(root->right);
                int dl=minDepth(root->left);
            //cout<<dr<<" "<<root->val<<" "<<dl<<endl;
           
            if(dr==0 and dl==0){
                    return 1;
            }
            if(dr==0 and dl!=0){
                    return dl+1;
            }
            if(dl==0 and dr!=0){
                    return dr+1;
            }
            if(dr<dl){
                    return dr+1;
            }
            return dl+1;
    }
};