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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
      queue<TreeNode*> q;
      priority_queue<int,vector<int>, greater<int>> pq;
            if(root1!=NULL)
            q.push(root1);
            if(root2!=NULL)
            q.push(root2);
          while(q.size()!=0){
              TreeNode* temp=q.front();
                  q.pop();
                  if(temp->left!=NULL){
                          q.push(temp->left);
                  }
                  if(temp->right!=NULL){
                          q.push(temp->right);
                  }
                  pq.push(temp->val);
          } 
            vector<int> ans;
            while(pq.size()!=0){
                    ans.push_back(pq.top());
                    pq.pop();
            }
            return ans;
    }
};