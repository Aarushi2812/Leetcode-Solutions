class Solution {
public:
        vector<int> help(vector<int> arr){
                vector<int> ans;
                for(int i=1;i<arr.size();i++){
                     ans.push_back((arr[i]+arr[i-1])%10);   
                }
                return ans;
        }
    int triangularSum(vector<int>& nums) {
            if(nums.size()==1){
                    return nums[0];
            }
            vector<int> ans;
            ans=help(nums);
            while(ans.size()!=1){
                    ans=help(ans);
            }
            
            return ans[0];
    }
};