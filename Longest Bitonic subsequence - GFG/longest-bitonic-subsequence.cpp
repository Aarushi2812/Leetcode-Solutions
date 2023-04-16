//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <bits/stdc++.h>
class Solution{
	public:
	vector<int> lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n,1);
        int ans=1;
        for(int i=1; i<n; i++){
            int a=1;
            for(int j = 0; j<i; j++){
                if(nums[j] < nums[i] and a <1+ dp[j]){
                    a =1+ dp[j];
                }
            }
            dp[i] = a;
        }
        return dp;
    }
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    vector<int> f = lengthOfLIS(nums);
	    
	    reverse(nums.begin(), nums.end());
	    
	    vector<int> b = lengthOfLIS(nums);
	    reverse(nums.begin(), nums.end());
	    reverse(b.begin(), b.end());
	    int n = nums.size();
	    int ans=0;
	    for(int i=0; i<n; i++){
	        //cout<<f[i]<<" "<<b[i]<<endl;
	        if(f[i]+b[i] > ans){
	            ans= f[i]+b[i];
	        }
	    }
	    return ans-1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends