class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int z=digits.size()-1;
            if(digits[z]!=9){
                    digits[z]+=1; return digits;
            }
            else if(digits[z]==9){
                    for(int i=z;i>=0; i--){//cout<<i<<endl;cout<<"hi"<<endl;
                            if(digits[i]==9) {digits[i]=0;}
                            else 
                            { digits[i]+=1; return digits;}    
                    }
            }
            digits[0]=1;
            for(int i=1;i<=z;i++){
                    digits[i]=0;
            }
            digits.push_back(0);
            return digits;
    }
};