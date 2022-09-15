class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
            sort(changed.begin(),changed.end());
            unordered_map<int , int> map;
            vector<int> ans;
            int c=0;
            for(int i=0;i<changed.size();i++){
                    if(changed[i]==0){
                            c++;
                            continue;
                    }
                    map[changed[i]]++;
            }
            for(int i=0; i<changed.size();i++){
                    if(map[changed[i]*2]>0 and map[changed[i]]>0){
                            //cout<<changed[i]<<endl;
                            ans.push_back(changed[i]);
                            map[changed[i]]--;
                            map[changed[i]*2]--;
                    }
            }
            // cout<<c<<ans.size()<<changed.size()<<endl;
            for(int i=0 ;i < c/2 ; i++){
                            ans.push_back(0);
                    }
            //cout<<c<<ans.size()<<changed.size()<<endl;
            if(ans.size()*2==(changed.size())){
                    
                    return ans;
            }
            vector<int> a;
            return a;
    }
};