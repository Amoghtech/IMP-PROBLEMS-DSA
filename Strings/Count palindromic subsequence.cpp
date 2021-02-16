int countPS(string str)
{ int c=0,n=str.size();
   int dp[n+1][n+1];   memset(dp, 0, sizeof(dp));
   
   for(int i=0;i<n;i++)
   dp[i][i]=1;
   
   for(int l=2;l<=n;l++){
       for(int i=0;i<n;i++){
           int k=l+i-1;
           if(str[i]==str[k]){
               dp[i][k]=1+dp[i][k-1]+dp[i+1][k];
           }
           else{
               dp[i][k]=dp[i][k-1]+dp[i+1][k]-dp[i+1][k-1];
           }
       }
   }
   
   return dp[0][n-1];
}