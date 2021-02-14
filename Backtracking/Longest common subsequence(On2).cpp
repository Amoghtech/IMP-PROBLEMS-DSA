int longestIncreasingSubsequence(vector<int> arr) {
int n=arr.size(),omax=0;
    int dp[n];
           memset(dp,0,sizeof(dp));

    for(int i=0;i<n;i++){
        int max=0;
        for(int j=0;j<i;j++){
        
            if(arr[j]<arr[i]){
                if(dp[j]>max){
                    max=dp[j];
                }
            }
            dp[j]=max+1;
            if(dp[j]>omax){
                omax=dp[j];
            }
        }
    }
    return omax-1;
}