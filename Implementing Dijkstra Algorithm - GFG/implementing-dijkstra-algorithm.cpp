//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> ans(V, 10e9);
        pq.push({0, S});
        ans[S] = 0;
        while(pq.size()!=0){
            int node = pq.top().second;
            int dist = pq.top().first;
            pq.pop();
            for(int i=0; i< adj[node].size(); i++){
                int subnode = adj[node][i][0];
                int subdist = adj[node][i][1] + dist;
                if(subdist < ans[subnode]){
                    ans[subnode] = subdist;
                    pq.push({subdist, subnode});
                }
            }
        }
        return ans;
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends