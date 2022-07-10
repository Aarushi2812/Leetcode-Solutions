class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            if(flowerbed.size()==1){
                    if(flowerbed[0]==0 and (n==0 || n==1)){
                            return  true;
                    }
                    else if(flowerbed[0]==1 and (n==0)){
                            return  true;
                    }
                    else 
                            return false;
            }
            
           
            for(int i=0; i<flowerbed.size(); i++){ cout<<flowerbed.size()<< i<<flowerbed[i]<< n<<endl;
                    if(flowerbed[i]==0 and (i==flowerbed.size()-1 ||flowerbed[i+1]!=1  ) and (i==0 || flowerbed[i-1]==0) and n!=0){
                            flowerbed[i]=1; n--;
                    }
            }
            cout<<n<<endl;
            if(n==0)
            { return true;}
            
            
            return false;
                
    }
};