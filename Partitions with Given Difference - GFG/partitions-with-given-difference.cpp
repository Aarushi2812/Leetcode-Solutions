//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countPartitions(int n, int d, vector<int>& nums) {
        // Code here
        int sum=0;
        for(int i=0; i<n ; i++){
            sum+=nums[i];
        }
        sum-=d;
        if(sum%2 !=0 || sum<0){
            return 0;
        }
        sum/=2;
        
        vector<vector<int>> dp(n , vector<int>(sum+1 , 0));
        for(int i=0; i<n;i++){
            if(nums[i]==0){
                dp[i][0]=2;
            }
            else{
                dp[i][0]=1;
            }
        }
            if(nums[0] !=0 and nums[0]<=sum) dp[0][nums[0]] =1;
        
        
        for(int i=1; i<n ;i++){
            for(int j=0;j<sum+1;j++){
                int nottake = dp[i-1][j];
                int take=0;
                if( j - nums[i]>= 0 ){
                    take = dp[i-1][j-nums[i]];
                }
                dp[i][j]=(take+nottake)%1000000007;
            }
        }
        return dp[n-1][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends