class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
            vector<int> ans;
//             for(int i=0; i<queries.size();i++){
// //cout<<"a"<<endl;
//                     int nin=queries[i][1];
//                     int sum=0;
//                     nums[nin]+=queries[i][0];
//                     for(int j=0;j<nums.size();j++){
                            
//                             if(nums[j]%2==0){
//                                     sum+=nums[j];
//                             }
//                     }
                    
//                     ans.push_back(sum);
//             }
            
            int sum=0;
            for(int i=0 ; i<nums.size();i++){
                    if(nums[i]%2==0){
                            sum+=nums[i];
                    }
            }
            for(int i=0; i<queries.size();i++){
                    int ind=queries[i][1] , val=queries[i][0];
                    
                    if((nums[ind]+val)%2==0){
                            if(nums[ind]%2==0){
                                    sum+=val;
                            }
                            else{
                                    sum+=nums[ind]+val;
                            }
                    }
                    else if(nums[ind]%2==0){
                            sum-=nums[ind];
                    }
                    nums[ind]+=val;
                    ans.push_back(sum);
                    
            }
            return ans;
    }
};