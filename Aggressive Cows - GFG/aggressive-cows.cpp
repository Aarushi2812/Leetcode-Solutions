//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    // Min dist between the cows is max
    bool ispossible(vector<int> &stalls, int k, int mindist){
        long long currdist = 0;
        long long placedCows = 1;
        int n = stalls.size();
        
        //cout<<k<<endl;
        for(int i = 1; i<n; i++){
            currdist += stalls[i]-stalls[i-1];
            //cout<<placedCows<<" "<<currdist<<" "<<stalls[i]<<endl;
            if(currdist >= mindist){
                placedCows ++;
                currdist = 0;
            }
            if(placedCows == k){
                return true;
            }
        }
        if(placedCows >= k){
                return true;
            }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end());
        long long maxdist = 0;
        for(int i=1; i<n; i++){
            maxdist +=  stalls[i]-stalls[i-1];
        }
        long long low = 1;
        long long high = maxdist;
        long long mid;
        int ans = 0;
        while( low<= high){
            mid = low + (high - low)/2;
            bool temp = ispossible(stalls, k, mid);
            if(temp){
                low = mid+1;
                ans = mid;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends