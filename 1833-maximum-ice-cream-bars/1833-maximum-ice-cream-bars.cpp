class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        priority_queue <int, vector<int>, greater<int>> pq; 
            for(int i =0 ; i < costs.size() ; i++){
                  pq.push(costs[i]);
            }
            int ans = 0 ;
            while(pq.size()!=0 and pq.top() <=coins ){
                    cout<<ans<<"  " <<coins<<" "<<pq.top()<<endl;
                    ans++;
                    coins-=pq.top();
                    pq.pop();
                    
            }
            return ans;
    }
};