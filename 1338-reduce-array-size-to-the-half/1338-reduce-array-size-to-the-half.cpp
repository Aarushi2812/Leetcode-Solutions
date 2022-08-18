#include <unordered_map>
class Solution {
public:
    int minSetSize(vector<int>& arr) {
            vector <int > vec;
            priority_queue<int>pq;
            unordered_map <int ,int> map;
            for(int i=0; i<arr.size();i++){
                    map[arr[i]]++;
            }
            for(int i=0;i<arr.size();i++){
                    if(map[arr[i]]>0){
                            pq.push(map[arr[i]]);
                            map[arr[i]]=0;
                            
                    }
            }
            int length=arr.size();
            int lentemp=arr.size();
            int c=0;
            for(int i=0;i<pq.size();i++){
                    int j=pq.top();
                    pq.pop();
                    lentemp-=j;
                    c++;
                    if(2*lentemp<=length){
                            break;
                    }
                    
            }
            
      return c;  
    }
};