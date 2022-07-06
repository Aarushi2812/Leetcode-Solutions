class Solution {
public:
        bool valid(int i , int j , vector<vector<char>> &board){
                
                int a[10],g;
                for(int p=1; p<10 ; p++){
                           a[p]=0;
                           
                   }
                for(int p=i; p<i+3; p++){
                        for(int q=j;q<j+3;q++){
                                if(board[p][q]!='.'){
                                        int f=board[p][q]-48;
                                        cout<<f<<' '<<board[p][q]<<' '<<p<<' '<<q<< i<<j<<endl;
                                        a[f]++;
                                }
                        }
                }
                for(int p=1; p<10 ; p++){
                           if(a[p]==0||a[p]==1){
                               
                           }
                        else return false;
                          }
                
                return true;
                
        }
        
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9;
        int a1[10],a2[10];
            for(int i=0; i<n ; i++){
                   for(int j=1; j<n+1 ; j++){
                           a1[j]=0;
                           a2[j]=0;
                   }
                    
                    for(int j=0; j<n; j++){
                         //  cout<< board[i][j]<<board[j][i]<<endl;
                            if(board[i][j]!='.')
                            { int a=board[i][j]-48; a1[a]++;}
                            if(board[j][i]!='.')
                            { int b=board[j][i]-48;a2[b]++;}
                    }
                    for(int j=1; j<=n ; j++){
                           // cout<<'j'<<endl;
                          // cout<<a1[j]<<a2[j]<<endl;
                            if((a1[j]==0 || a1[j]== 1) and (a2[j]==0 || a2[j]==1))
                            {}
                            else return false  ;      
                            
                            
                    }
                    
                    
            }
                 
            
            for(int i=0; i<n ; i+=3){
                    for(int j=0; j<n; j+=3){
                          if(valid(i,j, board)){
                                  
                          }  
                            else
                            {
                                    return false;
                            }
                    }
            }
           
        return true;    
    }
};