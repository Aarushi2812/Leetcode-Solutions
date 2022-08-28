#include <queue>
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       
            int n=mat.size();
            int m=mat[0].size();
            int p,q;
            for(int i=0;i<n;i++){
                   priority_queue<int, vector<int>, greater<int> > pq;  
                    p=i;
                    q=0;
                    while(p<n and q<m){
                     pq.push(mat[p][q]);  p++;q++;     
                    }
                    p=i;
                    q=0;
                    while(pq.size()!=0){
                       mat[p][q]=pq.top();
                       pq.pop();
                            p++;
                            q++;
                    }
            }
            for(int i=1;i<m;i++){
                   priority_queue<int, vector<int>, greater<int> > pq;  
                    p=0;
                    q=i;
                    while(p<n and q<m){
                     pq.push(mat[p][q]);  p++;q++;     
                    }
                    p=0;
                    q=i;
                    while(pq.size()!=0){
                       mat[p][q]=pq.top();
                       pq.pop();
                            p++;
                            q++;
                    }
            }
            return mat;
    }
};