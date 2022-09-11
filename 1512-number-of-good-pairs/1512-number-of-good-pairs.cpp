class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
            unordered_map<int , int> map;
            int count=0;
        for(int i=0 ;i<nums.size();i++ ){
             if(map[nums[i]]>0){
                   count+=map[nums[i]];  
             }   
                map[nums[i]]++;
        }
            return count;
    }
};