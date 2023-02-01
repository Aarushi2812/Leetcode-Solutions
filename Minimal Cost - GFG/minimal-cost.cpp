//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        if(n==1){
            return 0;
        }
        if(n==2){
            return abs(height[0]-height[1]);
        }
        int dp[n];
        dp[0] = 0;
        dp[1] = abs(height[0]-height[1]);
        for(int i=2; i<n ; i++){
            int temp = INT_MAX;
            for(int j=i-1; j>=0 and j>=i-k ; j--){
                int a = abs(height[i]-height[j]) + dp[j];
                //cout<<a<<" "<<j<<" "<<i<<endl;
                if(a < temp ){
                    temp = a;
                }
            }
            dp[i]=temp;
        }
        // for(int i=0; i<n;i++){
        //     cout<<dp[i]<<" ";
        // }cout<<endl;
        return dp[n-1];
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends