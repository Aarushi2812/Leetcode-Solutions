class Solution {
public:
        int words(string s){
                int c=0;
                for(int i=0; i<s.length(); i++){
                        if(s[i]==' '){
                                c++;
                        }
                }
                return c+1;
        }
    int mostWordsFound(vector<string>& sentences) {
            int p=words(sentences[0]);
            for(int i=0; i<sentences.size(); i++){
                    if(words(sentences[i])>p){
                            p=words(sentences[i]);
                    }
            }
      return p;  
    }
};