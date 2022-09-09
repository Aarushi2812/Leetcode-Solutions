class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSize) {
        vector<vector<int>> ans;
            for(int i=0;i<groupSize.size();i++){
                    if(groupSize[i]==0){
                            continue;
                    }
                    vector<int> a;
                    if(groupSize[i]==1){
                            a.push_back(i);
                            ans.push_back(a);
                            continue;
                    }
                    int s=groupSize[i];
                    int v=1;
                    a.push_back(i);
                    for(int j=i+1;j<groupSize.size();j++){
                            if(groupSize[j]==s){
                                    groupSize[j]=0;
                                    a.push_back(j);
                                    v++;
                                    if(v==s){
                                            break;
                                    }
                            }
                    }
                    ans.push_back(a);
            }
            return ans;
    }
};