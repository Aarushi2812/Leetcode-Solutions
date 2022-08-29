class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
            if(nums.size()<=0){
                    vector<int> null;
                    ans.push_back(null);
                    return ans;
            }
          // vector <vector<int>> con=subsets(nums.begin();nums.end());
            int no=nums[nums.size()-1];
            nums.pop_back();
           vector <vector<int>> ncon=subsets(nums); 
            int s=ncon.size();
            for(int i=0;i<s;i++){
                    vector<int> a=ncon[i];
                    a.push_back(no);
                    ncon.push_back(a);
                  //  cout<<"a"<<endl;
            }
            
            return ncon;
            
    }
};