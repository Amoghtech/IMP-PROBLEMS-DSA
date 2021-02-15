
//User function template for C++

// A : given string to search
// B : vector of available strings
unordered_map<string,int> dp;
int solve(string A, vector<string> &B){
    if(A.length()==0)
    return 1;
    if(dp[A]!=0)
    return dp[A];
    
    for(int i=1;i<=A.length();i++){
        string x=A.substr(0,i);
        int f=0;
        
            if(find(B.begin(),B.end(),x)!=B.end()){
                
                f=1;
            }
            if(f==1 && solve(A.substr(i,A.length()-i),B)==1){
                return dp[A]=1;
            }
    }

    return dp[A]=0;

}
int wordBreak(string A, vector<string> &B) {
    //code here
return solve(A,B);
}