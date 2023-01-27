//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
// 	int num( int arr[] , int n , int sum , int ind){
// 	    if(sum==0){
// 	        return 1;
// 	    }
// 	    if(0 > ind){
// 	        return 0;
// 	    }
	    
// 	    int nottake = num( arr , n , sum , ind-1);
// 	    int take=0;
// 	    if(sum - arr[ind] >= 0){
// 	        take = num( arr , n , sum-arr[ind] , ind-1);
// 	    }
// 	    return take + nottake;
// 	}
	int perfectSum(int arr[], int n, int sum)
	{   
	    int dp[n][sum+1];
	    for(int i=0; i< n ; i++){
	        if(arr[i] ==0){
	            dp[i][0]=2;
	        }
	        else {
	            dp[i][0]=1;
	        }
	        
	    }
	    for(int j=1; j<sum+1 ; j++){ 
	        if( arr[0]== j){dp[0][j] = 1;} 
	        else{ dp[0][j] = 0;}
	            
	        }
	    for(int i=1; i<n ; i++){
	        for(int j=0; j<sum+1 ; j++){
	            int nottake = dp[i-1][j];
	            int take =0;
	            if(j - arr[i] >= 0){
	                take = dp[i-1][j-arr[i]];
	            }
	            dp[i][j]= (take+nottake)%1000000007;
	        }
	    }
	    
	    return dp[n-1][sum];
        
        
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends