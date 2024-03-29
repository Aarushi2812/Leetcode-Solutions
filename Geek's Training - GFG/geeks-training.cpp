//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        if(n==1){
            return max(points[0][1],max(points[0][0] , points[0][2]));
        }
        int dp[n][3];
        dp[0][0] = points[0][0];
        dp[0][1] = points[0][1];
        dp[0][2] = points[0][2];
        
        for(int i=1; i<n; i++){
            for(int j=0; j<3 ; j++){
                int curr = points[i][j];
                int m = INT_MIN;
                if(j==0){
                    m = max(dp[i-1][1],dp[i-1][2]);
                }
                else if(j==1){
                    m = max(dp[i-1][0],dp[i-1][2]);
                }
                else if(j==2){
                    m = max(dp[i-1][1],dp[i-1][0]);
                }
                dp[i][j] = curr + m;
            }
        }
        return max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends