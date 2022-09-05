/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
            vector<vector<int>>ans;
            if(root==NULL){
                    return ans;
                    
            }
            queue<Node*> q;
            //vector<vector<int>>ans;
            q.push(root);
            q.push(NULL);
            vector<int>a;
            while(q.size()!=0){
                  
              Node* front=q.front();
              q.pop();
                    if(front==NULL){
                     q.push(NULL);
                     ans.push_back(a);
                            int s=a.size();
                     
                            if(q.size()==1){
                                    break;
                            }
                            for(int i=0; i<s;i++){
                             a.pop_back();
                                  
                     }
                          continue;    
                    }
                    a.push_back(front->val);
                    
                    for(int i=0;i<front->children.size();i++){
                            q.push(front->children.at(i));
                    }
                    
                    
                    
            }
            return ans;
    }
};