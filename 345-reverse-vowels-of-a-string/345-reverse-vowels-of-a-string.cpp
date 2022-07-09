class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j=s.length()-1,p,q;
         char ch;   
            while(j>i){
                    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' ){
                     p=100;       
                    }
                    else{
                            i++;
                    }
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j ]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j ]=='U' ){
                     q=100;       
                    }
                    else{
                            j--;
                    }
                    if(p==100 and q==100){
                            p=0;
                            q=0; cout<<s[i]<<s[j]<<endl;
                            ch=s[i];
                            s[i]=s[j];
                            s[j]=ch;
                            i++;
                            j--;
                    }
            }
            return s;
    }
};