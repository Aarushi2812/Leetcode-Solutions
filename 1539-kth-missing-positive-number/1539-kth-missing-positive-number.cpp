class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;int a=-1,j;j=0;int p=1;
            while(j<arr.size() ){ cout<<"i= "<<i<<"p= "<<p<<" arr[j] "<<arr[j]<<" j= "<<j<<" a= "<<a<<endl;
               if(p==arr[j]){
                       p++;
                       j++;continue;
               }else if(p!=arr[j] and i==k){
                           cout<<"hi"<<a<<endl;
                            break;
                    }
               else if(p!=arr[j] and i!=k){
                   a=p;  p++;
                     //  j++;
                       i++;continue;
               }
                    
                   
            }
            cout<<a<<endl;
            if(i<k){
                    return p+k-i-1;
            }
            
            return a;
    }
};