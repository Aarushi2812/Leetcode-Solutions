//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
            vector<int> ans;
            vector<long long int> hash;
            long long int patsize = pat.size();
            long long int a = 0;
            //calculating power
            vector<long long int> power (1000007,1);
            for(int i=1; i<100000; i++){
                power[i] =( (power[i-1]*28)%10000007);
            }
            
            //calculating txt hash
            hash.push_back(0);
            for(int i = 0; i<txt.size(); i++){
                int s = power[i];
                
                int t =( txt[i] - 96);
                long long int o = (t*s)%10000007;
                a = (a + o)%10000007;
                hash.push_back(a);
            }
            
            //claculating pat hash
            long long int patval = 0;
            for(int i = 0; i<patsize; i++){
                int s = power[i];
                
                int u = (pat[i] - 96);
                long long int q = (u*s)%10000007;
                patval = (patval+q) % 10000007;
            }
            //
            a =0;
            long long int j = 1;
                
            for(int i = 0; i+patsize<hash.size(); i++){
                long long int cur = (hash[i+patsize]-hash[i]+10000007)%10000007;
                //cout<<cur<<" "<<(patval*power[i])%100000<<endl;
                if(cur == (patval*power[i])%10000007){
                    ans.push_back(i+1);
                }
            }
            if(ans.size()==0){
                return {-1};
            }
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends