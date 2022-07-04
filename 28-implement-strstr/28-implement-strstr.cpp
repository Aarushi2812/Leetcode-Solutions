class Solution {
public:
        bool check(string h, string n, int i){
               for(int j=0; j<n.length();j++){
                                   if(h[i]!=n[j]) return false;
                       i++;
                             } 
                return true;
        }
    int strStr(string haystack, string needle) {
       int p=needle.length();
               for(int i=0; i<haystack.length(); i++ )
               {
                     if(haystack[i]==needle[0])
                     { cout<<i<<endl;
                           if(check(haystack,needle,i)) return i;  
                     }
               }
            return -1;
    }
};