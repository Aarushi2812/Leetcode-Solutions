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
#include <queue>
class Solution {
public:
    int avg( TreeNode*root){
     queue <TreeNode*> q;
            int sum=0;
            int c=0;
            q.push(root);
            while(q.size()!=0){
              TreeNode* a=q.front();
              q.pop();
                    
              sum+=a->val;
                    c++;
              if(a->right!=NULL){
                            q.push(a->right);
                    }      
              if(a->left!=NULL){
                            q.push(a->left);
                    }       
      
            }
            
            int ans=sum/c;
            return ans;
    }    
        
    int averageOfSubtree(TreeNode* root) {
            
        if(root==NULL){
                return 0;
        }
        int av=avg(root);
        int left=averageOfSubtree(root->left);
        int right=averageOfSubtree(root->right);   
            //cout<<av<<" l"<<left<<" r"<<endl;
        if(root->val==av){
                return 1+left+right;
        }
            return left+right;
    }
};