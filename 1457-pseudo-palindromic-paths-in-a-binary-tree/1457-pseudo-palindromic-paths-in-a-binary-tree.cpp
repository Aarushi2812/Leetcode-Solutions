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
     
     int pseudo (TreeNode* root,vector<int> arr) {
             if(root==NULL){
                     return 0;
             }
            arr[root->val]++; 
             
      if(root->right==NULL and root->left==NULL){
              int c=0;
              for(int i=0;i<10;i++){
                      if(arr[i]%2!=0 and c==0){
                              c++;
                      }
                      else if(arr[i]%2!=0 and c>0){
                              return 0;
                      }
              }
              return 1;
              
      } 
          
          int r=pseudo(root->right,arr);
          int l=pseudo(root->left,arr);
                  
                  return r+l;
            
    }   
    int pseudoPalindromicPaths (TreeNode* root) {
            vector<int> arr;
      for(int i=0;i<10;i++){
              arr.push_back(0);
      }
          return pseudo(root,arr);
            
    }
};