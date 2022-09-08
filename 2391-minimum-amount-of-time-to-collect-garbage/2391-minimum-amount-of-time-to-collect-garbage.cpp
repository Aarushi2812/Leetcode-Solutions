class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
            int g=0,p=0,m=0;
            for(int j=0;j<garbage[0].size();j++){
                            if(garbage[0][j]=='G'){
                                    g++;
                            }
                            if(garbage[0][j]=='M'){
                                    m++;
                            }
                            if(garbage[0][j]=='P'){
                                    p++;
                            }
                    }
            int sum=m+g+p;
            int tp=0,tg=0,tm=0;
            for(int i=1; i<garbage.size();i++){
                  g=0;p=0;m=0;
                    for(int j=0;j<garbage[i].size();j++){
                            if(garbage[i][j]=='G'){
                                    g++;
                            }
                            if(garbage[i][j]=='M'){
                                    m++;
                            }
                            if(garbage[i][j]=='P'){
                                    p++;
                            }
                    }
                    
                    if(g>0){
                            sum+=travel[i-1]+g+tg;
                            tg=0;
                    }
                    else{
                            tg+=travel[i-1];
                    }
                    if(m>0){
                            sum+=travel[i-1]+m+tm;
                            tm=0;
                    }
                    else {
                            tm+=travel[i-1];
                    }
                    if(p>0){
                            sum+=travel[i-1]+p+tp;
                            tp=0;
                    }
                    else{
                            tp+=travel[i-1];
                    }
                    
            }
            return sum;
    }
};