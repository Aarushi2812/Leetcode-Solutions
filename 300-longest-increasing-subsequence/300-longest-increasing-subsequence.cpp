class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
            int n=arr.size();
   int ans[n+1];
    ans[0]=0;
    ans[1]=1;
    int max=1;
    for(int i=2;i<n+1;i++){
       int min=1;
        for(int j=0;j<i;j++){
            
            // if(arr[j]<arr[i-1] and max<ans[j+1]+1){
            //     max=ans[j+1]+1;
            // }
            if(arr[i-1]>arr[j] and min<ans[j+1]+1){
                min=ans[j+1]+1;
            }
            
        }
        ans[i]=min;
        if(min>max){
            max=min;
        }
    }
    return max;
    }
};