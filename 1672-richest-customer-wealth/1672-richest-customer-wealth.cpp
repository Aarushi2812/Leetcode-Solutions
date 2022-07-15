class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
     
            int n=accounts.size(), sum=0,a=0;
            int m=accounts[0].size();
            
            
            for(int i=0; i<m; i++){
                    sum+=accounts[0][i];
            }
            cout<<sum<<endl;
            for(int i=1; i<n; i++){
                 a=0;
                    for(int j=0; j<m; j++){
                            a+=accounts[i][j];
                    }
                    if(sum<a){
                            sum=a;
                    }
            }
            return sum;
    }
        
            
};