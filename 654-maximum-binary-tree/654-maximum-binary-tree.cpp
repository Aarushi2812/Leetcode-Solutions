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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
           TreeNode* ans=new TreeNode() ; 
        if(nums.size()==0){
                return NULL;
        }
            int ind=0;
            int max=nums[0];
            for(int i=1; i<nums.size();i++){
                    if(max<nums[i]){
                            max=nums[i];
                            ind=i;
                    }
            }
            vector<int>l,r;
            for(int i=0;i<ind;i++){
                    l.push_back(nums[i]);
            }
            for(int i=ind+1 ; i<nums.size() ; i++){
                    r.push_back(nums[i]);
            }
            TreeNode* le=constructMaximumBinaryTree(l);
            TreeNode* ri=constructMaximumBinaryTree(r);      
            ans->left=le;
            ans->right=ri;
            ans->val=max;
            
            return ans;
            
    }
};