class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
            if(n==0){return ans;}
            vector<int> a1; a1.push_back(1); ans.push_back(a1);
            if(n==1){return ans;}
            vector<int>a2;
            a2.push_back(1);
            a2.push_back(1); ans.push_back(a2);
            if(n==2){return ans;}
            
            for(int i=2 ; i< n; i++){
                    vector<int> a;
                    int j=0;
                    while(j!=i+1){//cout<<"j= "<<endl;
                            if(j==0 || j==i){
                                    a.push_back(1);
                            }
                            else{//cout<<"hey"<<endl;
                                    a.push_back(ans[i-1][j-1]+ans[i-1][j]);
                                 //cout<<"hey2"<<endl;
                            }
                            j++;
                    }//cout<<a.size()<<endl;
                    // for(int p=0; p<a.size();p++){
                    //         cout<<a[p]<<endl;
                    // }
                    
                    ans.push_back(a);
            }
            return ans;
    }
};