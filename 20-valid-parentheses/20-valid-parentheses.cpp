#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack <char> s1;
            for(int i=0; i<s.length(); i++){
                    if(s[i]=='(' ||s[i]=='['||s[i]=='{' ){
                            s1.push(s[i]);cout<<s[i]<<endl;
                    }
                    else if(s[i]==')' and (s1.empty() ||s1.top()!='(' )){
                            return false;
                    }
                   else if(s[i]==']' and (s1.empty()||s1.top()!='[' )){
                            return false;
                    }
                   else if(s[i]=='}' and (s1.empty()||s1.top()!='{' )){
                            return false;
                    }
                    //else(s[i]==']' )
                    else {
                            s1.pop();
                    }
                    
                    
            }
            if(s1.empty()){
                    return true;
            }
        return false;;
    }
};