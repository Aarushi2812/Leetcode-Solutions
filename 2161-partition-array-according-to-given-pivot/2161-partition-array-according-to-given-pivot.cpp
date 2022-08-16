class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int> arr;
            int p=0;
            for(int i=0;i<nums.size();i++){
                    if(nums[i]==pivot){
                            p++;
                    }
                    if(nums[i]<pivot){
                            arr.push_back(nums[i]);
                    }
            }
            for(int i=0;i<p;i++){
                    arr.push_back(pivot);
            }
            for(int i=0;i<nums.size();i++){
                    if(nums[i]>pivot){
                            arr.push_back(nums[i]);
                    }
            }
            return arr;
    }
};