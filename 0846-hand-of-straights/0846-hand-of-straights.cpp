class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gp) {
        int n= hand.size();
            if( n % gp !=0){
                    return false;
            }
            unordered_map<int , int> map;
            sort(hand.begin() ,hand.end());
            for(int i=0; i<n;i++){
                    map[hand[i]]++;
            }
            for(int i=0; i< n ;i++){
                    
                    if(map[hand[i]]!=0){
                    //cout<<hand[i]<<endl;
                    int a=gp;
                    int b=hand[i];
                    map[b]--;                   //cout<<a<<" "<<b<<endl;
                    a--;b++;
                    while(a != 0){              //cout<<a<<" "<<b<<endl;
                            if(map[b]==0){
                                    return false;
                            }
                            map[b]--;
                            a--;
                            b++;
                    }
                    }
            }
            return true;
    }
};