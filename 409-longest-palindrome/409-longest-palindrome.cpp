class Solution {
public:
    int longestPalindrome(string s) {
            int arrl[27], arru[27];
            int p=0;
            for(int i=0; i<27;i++){
                    arrl[i]=0;arru[i]=0;
            }
            for(int i=0; i<s.length(); i++){
                    if(s[i]>='a' and s[i]<='z'){
                    p=s[i]-'a';//cout<<p<<endl;
                    arrl[p]++;
                    }
                    
                    if(s[i]>='A' and s[i]<='Z'){
                       p=s[i]-'A';//cout<<p<<endl;
                    arru[p]++;      
                    }
            }
            for(int i=0; i<27;i++){
                 //  cout<<arrl[i]<<" "<<arru[i]<<endl;
            }
            p=0;
            int j=0;
            for(int i=0; i<27; i++){
                    
                    if(arrl[i]==1 and j==0){
                            j=1;p++;cout<<i<<p<<"a"<<"hi"<<endl;
                    }
                    if(arrl[i]%2==1 and j==0){
                          arrl[i]--;  j=1;p++;cout<<i<<p<<"b"<<endl;
                    }
                    if(arrl[i]%2==0 and arrl[i]!=0){
                            p+=arrl[i];cout<<i<<p<<"c"<<endl;
                    }
                    if((arrl[i]-1)%2==0 and arrl[i]!=0){
                            p+=arrl[i]-1;cout<<i<<p<<"z"<<endl;
                    }
                    
                    if(arru[i]==1 and j==0){
                            j=1;p++;cout<<i<<p<<"d"<<endl;
                    }
                    if(arru[i]%2==1 and j==0){
                            arru[i]--;j=1;p++;cout<<i<<p<<"e"<<endl;
                    }
                    if(arru[i]%2==0 and arru[i]!=0){
                            p+=arru[i];cout<<i<<p<<"f"<<endl;
                    }
                    if((arru[i]-1)%2==0 and arru[i]!=0){
                            p+=arru[i]-1;cout<<i<<p<<"c"<<endl;
                    }
            }
          //  cout<<p<<endl;
        return p;
    }
};