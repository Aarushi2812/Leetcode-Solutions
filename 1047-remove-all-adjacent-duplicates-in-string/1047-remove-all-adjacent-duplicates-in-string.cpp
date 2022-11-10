class Solution {
public:
    string removeDuplicates(string s){
            int n = s.length();
            stack<char> st;
            vector<char> v;
            for(int i=0;i<n;i++){
                    if(st.empty()){
                            st.push(s[i]);
                            v.push_back(s[i]);
                            continue;
                    }
                    if(st.top()!=s[i]){
                            v.push_back(s[i]);
                            st.push(s[i]);
                            continue;
                    }
                    while(!st.empty() && st.top()==s[i]){
                            v.pop_back();
                            st.pop();
                    }
            }
            string ans = "";
            for(int i=0;i<v.size();i++){
                    ans+=v[i];
            }
            return ans;
    }
};