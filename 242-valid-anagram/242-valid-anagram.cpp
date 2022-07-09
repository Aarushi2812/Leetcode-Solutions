class Solution {
public:
    bool isAnagram(string s, string t) {
           int a;
           int sa[27];
            int st[27];
            for(int i=0;i<27;i++){
                    sa[i]=0;
                    st[i]=0;
            }
            for(int i=0; i<s.length(); i++){
                 a=s[i]-'a';cout<<s[i]<<a<<endl;
                 sa[a]++;
            }
             for(int i=0; i<t.length(); i++){
                 a=t[i]-'a';cout<<t[i]<<a<<endl;
                 st[a]++;
            }
            for(int i=0; i<27; i++){
                    if(sa[i]!=st[i]){
                            return false;
                    }
            }
            return true;
    }
};