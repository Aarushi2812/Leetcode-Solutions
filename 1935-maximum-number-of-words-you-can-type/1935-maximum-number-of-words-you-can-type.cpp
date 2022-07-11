class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
            int p=0,r=0,s=0;
            text+=' ';
        for(int i=0; i<text.length();i++){
                if(text[i]==' '){
                        s++;
                }
                if(text[i]==' ' and r!=0){
                     p++;
                     r=0;
                }
                
                for(int j=0;j<brokenLetters.length();j++){
                        if(text[i]==brokenLetters[j]){
                          r++;    cout<<text[i]<<endl;  
                        }
                }
        }
            return s-p;
    }
};