class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
            int beam=0;  
            int l=0;
        for(int i=0;i<bank.size();i++){
                int t=0;
          
                for(int j=0 ; j<bank[i].size();j++){
                    if(bank[i][j]=='1'){
                           t++; 
                    }    
                }
                beam+=(l*t);
                if(t!=0){
                        l=t;
                }
                
                
        }
            return beam;
    }
};