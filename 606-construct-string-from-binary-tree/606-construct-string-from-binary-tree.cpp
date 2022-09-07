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
    string tree2str(TreeNode* root)
    {
     string a="";
        if(root==NULL){
            return a;
        }
    string r=tree2str(root->right);
    string l=tree2str(root->left);
            
        if(l=="" and r!=""){
          l="()";      
        }
        else if(l!=""){
           l='('+l+')';     
        }
        if(r!=""){
           r='('+r+')';    
        }
            
        string ch= to_string(root->val);
            
        a= a +ch +l+r;
      //  cout<<a<<endl;
        return a;   
    }
};