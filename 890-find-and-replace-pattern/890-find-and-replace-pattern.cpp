#include <unordered_map>
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        if(pattern.length()==1){
                return words;
        }
       
            vector<string> ans;
            for(int i=0;i<words.size();i++){
                    int c=0;
                     unordered_map<char,char>map;
                    unordered_map<char,int>map1;
                    for(int j=0;j<pattern.length();j++){
                            //cout<<j<<pattern[j]<<" "<<i<<words[i][j]<<endl;and map.count(words[i][j])<1cout<<words[i][j]<<" "<<pattern[j]<<" hey"<<endl;cout<<words[i][j]<<" "<<pattern[j]<<" hiiii"<<endl;
                            
                            
                           if(map[words[i][j]]==0 and map1[pattern[j]]==0 ){                                          
                                   
                                   map1[pattern[j]]++;
                                   map[words[i][j]]=pattern[j];
                           } 
                           else if(map[words[i][j]]!=pattern[j]){
                                   
                                   c++;
                                   break;
                           }
                           
                    }
                    if(c==0){
                      ans.push_back(words[i]);      
                    }
            }
            return ans;
    }
};