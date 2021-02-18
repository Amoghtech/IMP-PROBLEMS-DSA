
// C++ program for getting minimum character to be 
// added at front to make string palindrome 
#include <bits/stdc++.h> 
using namespace std; 

int lcs(string s1,string s2){
int dp[s1.length()+1][s2.length()+1];
string res="";
for(int i=0;i<=s1.length();i++){
    for(int j=0;j<=s2.length();j++){
        if(i==0 || j==0){
            dp[i][j]=0;
        }
        else{
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
                res+=s1[i-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
}

cout<<res<<endl;
return dp[s1.length()][s2.length()];
}

// Driver program to test above functions 
int main() 
{ 
 
	cout << lcs("bd","bcad"); 
	return 0; 
} 
