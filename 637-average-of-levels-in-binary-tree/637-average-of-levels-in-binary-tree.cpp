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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);
          //  ans.push_back(root->val);
            long sum=0;
            long c=0;
            while(q.size()!=0){
               TreeNode* front=new TreeNode();
                    front=q.front();
                   q.pop();
                    
                    if(front==NULL){//cout<<"aaaaaaaaa"<<endl;

                                    
                            double avg=((double)sum)/c;
                            ans.push_back(avg);
                            sum=0;
                            c=0;
                            if(q.size()==0){
                                    break;
                            }
                            q.push(NULL);
                            continue;
                    }
                   // cout<<q.size()<<" "<<front->val<<endl;
                    sum=sum+front->val; c++;
                    
                    if(front->right!=NULL){
                            q.push(front->right);
                           
                    }
                    if(front->left!=NULL){
                            q.push(front->left);
                            
                    }
            }
            return ans;
    }
};