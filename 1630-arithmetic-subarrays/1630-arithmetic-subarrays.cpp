class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
            int i=0;
            vector<bool> ans;
            while(i<l.size() ){
                    
                    priority_queue<int> temp;
                    
                    for(int k=l[i];k<=r[i];k++){
                            temp.push(nums[k]);
                    }
                    
                    int e=temp.top();
                    temp.pop();
                    int diff=abs(e-temp.top());
                    int c=0;
                    while(temp.size()!=1){
                         e=temp.top();
                            temp.pop();
                            if(diff!=abs(e-temp.top())){
                                 
                                    c=1;
                                    break;
                            }
                    }
                    if(c==0){
                            ans.push_back(true);
                    }
                    else{
                            ans.push_back(false);
                    }
                    
                    i++;
            }
            return ans;
    }
};