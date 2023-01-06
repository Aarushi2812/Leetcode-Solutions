class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            unordered_map<int , int> map;
            for(int i=0; i<nums.size();i++){
                    map[nums[i]]++;
            }
            int ans=0;
            for(int i=0; i<nums.size() ; i++){
                    if(map[nums[i]]!=0 and map[nums[i]-1]==0){
                           int a=1;
                           int p=nums[i];
                            map[p]--;
                            while(map[p+1]!=0){
                                    p=p+1;
                                    a++;
                                    map[p]--;
                            }
                            if(a>ans){
                                    ans=a;
                            }
                    }
            }
            return ans;
    }
};