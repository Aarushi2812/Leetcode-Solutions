//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // int m(int i, int j, int n, int arr[]){
    //     if(i == j){
    //         return 0;
    //     }
    //     int ans =INT_MAX;
    //     for(int k = i; k<j; k++){
    //         ans = min(ans , m(i ,k , n, arr)+m(k+1, j, n, arr) + (arr[i-1] * arr[k]*arr[j]));
    //     }
    //     return ans;
    // }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        //return m(1, n-1, n, arr);
        vector<vector<int>> dp(n, vector<int> (n , 0));
        // base case has been covered in decleration
        for(int i = n-1; i >= 1; i--){
            for(int j = i+1; j< n; j++){
                int ans =1e9;
                
                for(int k = i; k<j; k++){
                    int steps = dp[i][k] + dp[k+1][j] + (arr[i-1] * arr[k] * arr[j]);
                    if(steps < ans){
                        ans = steps;
                    }
                }
                dp[i][j] = ans;            
            }
        }
        return dp[1][n-1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends