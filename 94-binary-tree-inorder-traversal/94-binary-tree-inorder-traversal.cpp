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
    vector<int> inorderTraversal(TreeNode* root) {
            vector<int> a;
        if(root==NULL){
                return a;
        }
            vector<int> r=inorderTraversal(root->right);
            vector<int> l=inorderTraversal(root->left);  
            for(int i=0;i<l.size();i++){
                    a.push_back(l[i]);
            }
            a.push_back(root->val);
            for(int i=0;i<r.size();i++){
                    a.push_back(r[i]);
            }
            
            return a;
    }
};