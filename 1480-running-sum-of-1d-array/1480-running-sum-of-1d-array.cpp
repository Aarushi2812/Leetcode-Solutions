class Solution {
public:
        // int su( int num){
        // int sum=0;
        //      for(int i=1; i<=num; i++) {
        //              sum+=i;
        //      } 
        //         cout<<sum<<endl;
        //         return sum;
        // }
        
    vector<int> runningSum(vector<int>& nums) {
        vector<int> s; int sum=0;
            for(int i=0; i<nums.size(); i++)
            {
                    sum+=nums[i];
                    s.push_back(sum);    
            }
            return s;
            
    }
};