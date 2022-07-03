class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x;
        for(int i=0 ; i<nums.size(); i++)
        {if(target>nums[nums.size()-1]){x=nums.size();break;}
        if(target<nums[0]){x=0;break;}
            if(nums[i]==target)
            {
                x=i; break;
            }
            else if(nums[i]<target && nums[i+1]>target){
                x=i+1; break ;
            }
           
        }
        
        return x;
    }
};