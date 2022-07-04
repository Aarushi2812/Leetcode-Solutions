class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;int p=0;
           while(j<nums.size()){
                   if(nums[j]!=0){
                           nums[i]=nums[j];i++;
                   }
                   else if(nums[j]==0){
                           p++;
                   }
                   j++;
           }
            
            cout<<p<<j<<i<<endl;
            for(int c=0;c<p;c++){
                   // cout<<i<<endl;
                nums[i]=0; i++;   
            }
            cout<<p<<j<<i<<endl;
    }
};