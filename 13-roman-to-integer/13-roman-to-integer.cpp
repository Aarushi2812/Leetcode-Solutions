#include <unordered_map>
class Solution {
public:
    int romanToInt(string s) {
      unordered_map<char,int> map;
            map['I']=1;
            map['V']=5;
            map['X']=10;
            map['L']=50;
            map['C']=100;
            map['D']=500;
            map['M']=1000;
            int sum=map[s[s.length()-1]];
            int j=map[s[s.length()-1]];
            
            for(int i=s.length()-2;i>=0;i--){
                    cout<<sum<<" "<<j<<endl;
                if(map[s[i]]<j){
                        sum-=map[s[i]]; cout<<sum<<"hi"<<j<<endl;
                }   
                else{
                         sum+=map[s[i]]; cout<<sum<<"h"<<j<<endl;
                 }
                    j=map[s[i]];
            }
    return sum;
    }
};