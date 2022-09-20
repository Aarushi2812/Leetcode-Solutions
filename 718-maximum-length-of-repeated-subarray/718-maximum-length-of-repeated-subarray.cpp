class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
            int n=nums1.size();
            int m=nums2.size();
        int dp[n][m];int max=0;
            for(int i=0 ; i<n; i++){
                    if(nums1[i]==nums2[0]){
                            dp[i][0]=1; max=1;
                    }
                    else{
                            dp[i][0]=0;
                    }
            }
            for(int j=1 ; j<m ; j++){
                    if(nums2[j]==nums1[0]){
                            dp[0][j]=1;max=1;
                    }
                    else{
                            dp[0][j]=0;
                    }
            }
            
            for(int i=1;i<n;i++){
                    for(int j=1; j<m; j++ ){
                            if(nums1[i]==nums2[j]){
                                    dp[i][j]=dp[i-1][j-1]+1;
                                    if(max<dp[i][j]){
                                            max=dp[i][j];
                                    }
                            }
                            else{
                                    dp[i][j]=0;
                            }
                    }
            }
            return max;
    }
};