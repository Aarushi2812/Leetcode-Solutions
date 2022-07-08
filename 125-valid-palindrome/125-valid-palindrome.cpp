class Solution {
public:
    bool isPalindrome(string s) {      
            string c=""; 
            for(int i=0; i<s.length() ; i++)
            {
                    if((s[i]>='a' and s[i]<='z')||(s[i]>='0' and s[i]<='9'))
                    {
                     c+=s[i];   
                    }
                    else if(s[i]>='A' and s[i]<='Z')
                    {
                            c+=(s[i]+32);
                    }            
            }
       //  int e=c.length()-1;
          int  i=0;
            for(i=0; i<c.length()/2 ; i++){
                 if(c[i]!=c[c.length()-i-1]){
                         return false;
                 } 
                   
                           }         
                    return true;
    }
};


// class Solution {
// public:
// bool isPalindrome(string s) {
// string temp="";
// for(int i=0;i<s.size();i++){
// if(s[i]>=65&&s[i]<=90)temp+=(s[i]+32);
// if(s[i]>=97&&s[i]<=122 || s[i]>='0'&&s[i]<='9')temp+=s[i];
// }
// cout<<temp;
// int i=0,e=temp.size()-1;
// while(i<e){
// if(temp[i]!=temp[e])return false;
// i++;
// e--;
// }
// return true;
// }
// };