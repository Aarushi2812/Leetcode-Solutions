class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int left[n] , up[n];
            for(int i=0;i<n;i++){
                  int maxl=0, maxu=0;
                    
                    for(int j=0;j<n;j++){
                            if(maxl<grid[i][j]){
                                    maxl=grid[i][j];
                            }
                            if(maxu<grid[j][i]){
                                    maxu=grid[j][i];
                            }
                    }
                    up[i]=maxu;
                    left[i]=maxl;
            }
            
            int ans=0;
            for(int i=0; i<n;i++){
                    for(int j=0;j<n;j++){
                            int cap=min(left[i],up[j]);
                            if(cap>grid[i][j])
                                    
                            {       
                                    ans+=cap-grid[i][j];
                             }
                    }
            }
            return ans;
            
    }
};