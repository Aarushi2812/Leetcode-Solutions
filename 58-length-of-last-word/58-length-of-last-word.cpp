#include <string>
//#include <boost/algorithm/string.hpp>
//using namespace boost::algorithm;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c,i,j=0, len=s.length();
         //   s=s.trim_right();
            for( i=s.length()-1; i>=0; i--){
                    if(s[i]!=' '){
                          break;  
                    }
                    len-=1;
                    
            }
            i=0;
            //cout<<len<<endl;
            for( i=len-1; i>=0; i--){//cout<<s[i]<<endl;
             if(s[i]==' ' ){ 
                c=i; break;    
             }  
              else{
                      j++;
              }                       
            }
            
            string p=s.substr(c+1,j);
         // cout<<"."<<p<<"."<<endl;
            return p.length();
    }
};