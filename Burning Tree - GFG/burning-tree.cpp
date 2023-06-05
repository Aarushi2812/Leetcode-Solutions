//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    map<Node*, Node* > p;
    Node* tar;
    void pm(Node* root){
        if(root ==NULL){
            return ;
        }
        if(root->left!=NULL){
            p[root->left] = root;
        }
        if(root->right!=NULL){
            p[root->right] = root;
        }
        pm(root->right);
        pm(root->left);
    }
    void fitar(Node* root, int target){
        if(root == NULL){
            return;
        }
        if(root->data == target){
            tar = root;
            return;
        }
        fitar(root->right , target);
        fitar(root->left , target);
    }
    int minTime(Node* root, int target) 
    {   
        pm(root);
        
        tar = NULL;
        fitar(root, target);
        
        int maxi = 0;
        
        queue<Node*> q;
        q.push(tar);
        q.push(NULL);
        
        map<Node*, int> v;
        v[tar] ++;
        
        while(q.size() != 0){
            //cout<<q.size()<<endl;
            Node* temp = q.front();
            q.pop();
            if(temp == NULL){//cout<<"null"<<q.size()<<endl;
                
                if(q.size() != 0){maxi++;
                    q.push(NULL);
                }
            }
            else{ //cout<<temp->data<<endl;
                if(temp->right!= NULL and v.count(temp->right) == 0){
                    q.push(temp->right);
                    v[temp->right]++;
                }
                if(temp->left!= NULL and v.count(temp->left) == 0){
                    q.push(temp->left);
                    v[temp->left]++;
                }
                if(p.count(temp)!= 0 and v.count(p[temp]) == 0){
                    q.push(p[temp]);
                    v[p[temp]]++;
                }
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends