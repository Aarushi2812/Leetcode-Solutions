class Solution {
public:
    vector<int> minOperations(string boxes) {
            vector<int> ans;
            int n=boxes.length();
            int arrl[n],arrr[n];
            arrl[0]=0;
            int balls=0;
            for(int i=1;i<n;i++){
                    
                    arrl[i]=arrl[i-1]+(boxes[i-1]-'0')+balls;
                    balls+=(boxes[i-1]-'0');
            }
            arrr[n-1]=0;
            balls=0;
            for(int i=n-2;i>=0;i--){
                   
                    arrr[i]=arrr[i+1]+(boxes[i+1]-'0')+balls;
                    balls+=(boxes[i+1]-'0');
            }
         
           for(int i=0; i<boxes.length();i++){
                   ans.push_back(arrr[i]+arrl[i]);
           }
           return ans;
    }
};