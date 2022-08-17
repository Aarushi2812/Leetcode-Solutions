#include <unordered_map>
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string> map;
        unordered_map<string,int> m;
            
            string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            char ch='a';
            for(int i=0; i<26;i++){//cout<<ch<<arr[i]<<endl;
               map[ch]=arr[i];
                    ch++;
            }
            for(int i=0; i<words.size();i++){
                  string temp="";
                   cout<<words[i]<<endl;
                  //cout<<map['g']<<endl;
                  
                    for(int j=0;j<words[i].length();j++){
                         temp +=map[words[i][j]];  
                            cout<<words[i][j]<<map[words[i][j]]<<endl;
                            
                    }
                    cout<<temp<<endl;
                    words[i]=temp;
                    m[temp]++;
            }
            int count=0;
            for(int i=0;i<words.size();i++ ){
                    if(m[words[i]]>0){
                            count++;
                            m[words[i]]=0;
                    }
            }
            return count;
            
    }
};