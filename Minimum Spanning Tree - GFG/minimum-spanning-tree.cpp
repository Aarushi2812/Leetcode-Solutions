//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq;
        vector<int> visited(V, 0);
        int sum = 0;
        // wt node parent
        pq.push({0, {0, -1}});
        
        while(pq.size()!=0){
            
            int wt = pq.top().first;
            int node = pq.top().second.first;
            int parent = pq.top().second.second;
            pq.pop();
            
            if(visited[node]==1){
                continue;
            }
            // put it in the edge list or sum (like in this question)
            sum += wt;
            visited[node] =1;
            
            for(int i=0; i<adj[node].size(); i++){
                if(visited[adj[node][i][0]] == 0){
                    pq.push({ adj[node][i][1], { adj[node][i][0], node}});
                }
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends