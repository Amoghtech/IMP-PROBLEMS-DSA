int LCS(string s1,string s2,int i,int j,int x, int y){
    int dp[]
    if(i==x || j==y)
    return 0;
    
    if(s1[i]==s2[j])
    return 1+LCS(s1,s2,i+1,j+1,x,y);
    else
    return max(LCS(s1,s2,i+1,j,x,y),LCS(s1,s2,i,j+1,x,y));
}