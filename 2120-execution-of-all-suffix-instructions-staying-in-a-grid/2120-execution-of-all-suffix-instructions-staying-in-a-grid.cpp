class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
            vector<int> ans;
            
            
            
            int grid[n][n];
            for(int i=0;i<s.length();i++){
                    int a=startPos[0];
                    int b=startPos[1];
                    int count=0;
                  for(int j=i;j<s.length();j++){
                      if(s[j]=='R'){
                              if(b+1<n and b+1>=0){
                                      count++;
                                     b=b+1;   
                              }
                              else {
                                      break;
                              }
                      }
                      if(s[j]=='L'){
                              if(b-1<n and b-1>=0){
                                      count++;
                                        b=b-1;
                              }
                              else {
                                      break;
                              }
                      }  
                      if(s[j]=='U'){
                              if(a-1<n and a-1>=0 ){
                                      count++;
                                        a=a-1;
                              }
                              else {
                                      break;
                              }
                      } 
                      if(s[j]=='D' ){
                              if(a+1<n and a+1>=0){
                                      count++;
                                        a=a+1;
                              }
                              else {
                                      break;
                              }
                      }    
                  }
                   ans.push_back(count); 
            }
            
            return ans;
    }
};