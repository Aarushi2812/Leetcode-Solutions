class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
            for(int i=0; i<nums.size() ; i++ ){
                    if (nums[i]==0) r++;
                    else if(nums[i]==1) w++;
                    else if(nums[i]==2) b++;
            }
            int ind=0;
            for(int i=0;i<r;i++){
                    nums[ind]=0; ind++;
            }
            for(int i=0;i<w;i++){
                    nums[ind]=1; ind++;
            }
            for(int i=0;i<b;i++){
                    nums[ind]=2; ind++;
            }
    }
};