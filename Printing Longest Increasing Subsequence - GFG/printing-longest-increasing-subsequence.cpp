//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        // Code here
        vector<int> dp( n, 1);
        vector<int> hash( n, 1);
        int ans=0;
        int mi = 0;
        for(int i=0; i < n;i++){
            int a = 1;
            int ind = i;
            for(int j = 0; j<i; j++){
                if(arr[i] > arr[j] and dp[j]+1 > a){
                    a = dp[j]+1;
                    ind = j;
                }
            }
            dp[i] = a;
            hash[i] = ind;
            if(ans < a){
                ans = a;
                mi = i;
            }
        }
        vector<int> vec;
        int li =mi; 
        int ci = hash[mi];
        vec.push_back(arr[mi]);
        while(li >= 0 and  ci>=0 and li!=ci){
            vec.push_back(arr[ci]);
            li = ci;
            ci = hash[ci];
        }
        reverse(vec.begin(), vec.end());
        return vec;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends