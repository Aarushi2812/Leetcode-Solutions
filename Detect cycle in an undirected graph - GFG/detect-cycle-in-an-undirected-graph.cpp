//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    vector<int> visited;
    bool is(int V, vector<int> adj[], int i){
        visited[i] = 1;
        queue<pair<int, int>> q;
        q.push({i, -1});
        //cout<<i<<endl;
        while(q.size()!=0){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            //cout<<parent<<" "<<node <<" "<<adj[node].size()<<endl;
            for(int a=0; a<adj[node].size(); a++){
                if( visited[adj[node][a]]==0){
                    
                    //cout<<"push = "<<adj[node][a]<<node<<endl;
                    visited[adj[node][a]] = 1;
                    q.push({adj[node][a], node});
                    
                }
                else if(adj[node][a] != parent){
                    return true;
                }
            }
            //cout<<"size =  "<<q.size()<<" "<<endl;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        for(int i =0; i<V; i++){
            visited.push_back(0);
        }
        bool ans = false;
        for(int i =0; i<V; i++){
            if(visited[i] == 0){
                bool a = is(V, adj, i);
                if(a){
                    return true;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends