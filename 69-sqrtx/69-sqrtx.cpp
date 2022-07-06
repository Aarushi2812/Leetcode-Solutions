class Solution {
public:
    int mySqrt(int x) {
          if(x==0) return 0;
            if(x==1) return 1;
            long long int i;
        for( i=0; i<x ; i++)
        {
                if((i*i)==x){
                        return i;
                }
                else if((i*i)<x and (i+1)*(i+1)>x){
                        return i;
                }
        }
             return -1;
    }
};