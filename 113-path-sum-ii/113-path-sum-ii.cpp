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
        vector<vector<int>> ans;
        void path(TreeNode* root, int csum , int tar , vector<int> p){
            //  cout<<csum<<endl;//|| tar<csum
                if(root==NULL  ){
                        return ;
                }
            //    cout<<csum<<endl;
                if(root->right==NULL and root->left==NULL and csum+root->val==tar){
                        // cout<<csum<<endl;
                        p.push_back(root->val);
                        ans.push_back(p);
                        return ;
                }//cout<<csum<<endl;
                if(root->right==NULL and root->left==NULL){
                        return;
                }//cout<<csum<<endl;
                p.push_back(root->val);
                
                path(root->right , csum+root->val , tar , p);
                path(root->left , csum+root->val , tar , p);
                ///cout<<csum<<endl;
        }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
          vector<int> p;  
        path( root , 0 , targetSum , p);
            
            return ans;
    }
};