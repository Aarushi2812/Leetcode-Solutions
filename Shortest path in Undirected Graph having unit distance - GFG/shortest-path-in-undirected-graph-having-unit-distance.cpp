//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        // code here
        vector<vector<int>> adj(n, vector<int>());
        for(int i=0; i<m ; i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> ans(n, -1);
        vector<int> visited(n, 0);
        visited[src] =1;
        queue<pair<int, int>> q;
        q.push({src, 0});
        while(q.size()!=0){
            int node = q.front().first;
            int dist = q.front().second;
            ans[node] = dist;
            q.pop();
            for(int i =0; i<adj[node].size(); i++){
                if(visited[adj[node][i]] == 0){
                    //cout<<adj[node][i]<<" "<<dist+1<<endl;
                    q.push({adj[node][i], dist+1});
                    visited[adj[node][i]] = 1;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends