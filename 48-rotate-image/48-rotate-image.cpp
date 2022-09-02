class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
          int n=matrix.size()-1;  
        for(int a=0; a<matrix.size()/2;a++){
               // cout<<"a="<<a<<" n= "<<n<<endl;
              
              for(int p=a; p<n;p++){
                   //   cout<<"p="<<p<<endl;
                      int i=a;
                      int j=p;
                      int temp=matrix[i][j];
                        int c=0;         
                     while(true){
                        // cout<<i<<j<<"bbbbbbbbbbbbbbbbbbb"<<n<<endl;
                         int temp1 = matrix[j][n+a-i];  
                         matrix[j][n+a-i]=temp;
                             temp=temp1;
                         int r=i; 
                         i=j;
                         j=n+a-r;
                             c++;
                           //  cout<<i<<j<<"aaaaaaaaaaaaaaaaaaaa"<<endl;
                     
                             // for(int x=0; x<matrix.size();x++){
                             //         for(int y=0;y<matrix.size();y++){
                             //                 cout<<matrix[x][y]<<"   ";
                             //         }
                             //         cout<<endl;
                             // }
                            if(c==4){
                                    break;
                            }
                             // if(i==a and j==p ){
                             //  //   break;
                             // }
        
                     }
                   
              }  n--;
        }
          
    }
};