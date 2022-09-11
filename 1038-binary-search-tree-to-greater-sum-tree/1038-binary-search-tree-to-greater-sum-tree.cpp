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
     vector<int> v;
        void help(TreeNode* root){
                if(root==NULL){
                        return;
                }
                help(root->left);
                v.push_back(root->val);
                help(root->right);
        }
        void change(TreeNode* root){
                if(root==NULL){
                        return ;
                }
                int sum=0;
                for(int i=v.size()-1; i>=0;i--){
                     if(root->val==v[i]){
                         break;    
                     }  
                        sum+=v[i];
                }
               
                root->val+=sum;
                change(root->left);
                change(root->right);
                
        }
        
    TreeNode* bstToGst(TreeNode* root) {
            help(root);
            change(root);
            return root;
    }
        
};