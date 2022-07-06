class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
            
        int n=matrix.size();
  int arr1[n+1] ; int arr2[n+1];
            
            for(int p=0; p<n; p++)
            {     for(int i=1;i<n+1;i++)
            { arr1[i]=0;arr2[i]=0; }
                for(int j=0; j<n;j++){
                       // cout<<arr1[matrix[j][p]]<<arr2[matrix[p][j]]<<endl;                        
                        arr1[matrix[p][j]]=arr1[matrix[p][j]]+1;
                        arr2[matrix[j][p]]=arr2[matrix[j][p]]+1;
                     
                    }
                 for(int i=1; i<n+1 ; i++)
                { //cout<<'j'<<endl;
                   //     cout<<arr1[i]<<arr2[i]<<endl;
                if(arr1[i]!=1 || arr2[i]!=1)
                {
                        return false; 
                }
                }       
                
            }
            
            return true;
    }
};