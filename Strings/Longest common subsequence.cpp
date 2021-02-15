int lcs(string s1,string s2,int i,int j,vector<vector<int>> &dp){
    if(i>-s1.length() || j>=s2.length())
    return 0;


    if(dp[i][j]!=-1)
    return dp[i][j];



    if(s[i]==s[j])
    return 1+lcs(s1,s2,i+1,j+1,dp);

    else
    {
        int left=lcs(s1,s2,i+1,j,dp);
        int right=lcs(s1,s2,i,j+1,dp);
        return dp[i][j]=max(left,right);
    }
}

