//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    // int ks(int w, int wt[], int val[], int i) {
    //     if(i == -1){
    //         return 0;
    //     }
    //     int nottake = ks( w , wt , val , i-1);
    //     int take = INT_MIN;
    //     if( w - wt[i] >= 0 ){
    //         take = val[i] + ks(w-wt[i] , wt , val , i-1);
    //     }
    //     return max(take,nottake);
    // }
    int knapSack(int W, int weight[], int val[], int n) 
    { 
       // Your code here
      vector<vector<int>> dp(n , vector<int> (W+1 , 0));
      for(int wt=1;wt<W+1;wt++){
          if(wt >= weight[0]){
              dp[0][wt]=val[0];
          }
      }
      for(int i=1; i<n ; i++){
          for(int wt=1; wt< W+1;wt++){
              int nottake = dp[i-1][wt];
              int take = INT_MIN;
              if(wt - weight[i] >=0){
                  take = val[i] + dp[i-1][wt-weight[i]];
              }
              dp[i][wt]=max(nottake,take);
          }
      }
      return dp[n-1][W];
       
    //return ks(W,wt,val,n-1);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends