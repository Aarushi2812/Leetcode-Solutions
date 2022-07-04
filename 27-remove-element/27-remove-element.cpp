class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0, i=0;
            while(j<nums.size()){
                    if(nums[j]!=val){
                            nums[i]=nums[j];
                            i++;
                    }
                    j++;
            }
            
            return i;
    }
};