class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
            
      vector<int> arr(nums.size());
            int n=1;
            int p=0;
            
      for(int i=0; i<nums.size();i++){
           if(nums[i]>0){
                   int j=nums[i];
                   arr[p]=j;
                   p+=2;
           }
           if(nums[i]<0){
                   arr[n]=nums[i];
                   n+=2;
           }   
      }
            return arr;
    }
};