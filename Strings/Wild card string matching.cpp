#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string x,y;
	    cin>>x;
	    cin>>y;
	    bool dp[x.length()+1][y.length()+1];
	    for(int i=x.length();i>=0;i--){
	        for(int j=y.length();j>=0;j--){
	            if(i==x.length() && j==y.length()){
	                dp[i][j]=true;
	            }
	            else if(i==x.length()){
	                dp[i][j]=false;
	            }
	            else if(j==y.length()){
	                if(x[i]=='*')
	                dp[i][j]=dp[i+1][j];
	                else
	                dp[i][j]=false;
	            }
	            else{
	                if(x[i]=='*'){
	                    dp[i][j]=dp[i+1][j] || dp[i][j+1];
	                }
	                else if(x[i]=='?'){
	                    dp[i][j]=dp[i+1][j+1];
	                }
	                else if(x[i]==y[j]){
	                    dp[i][j]=dp[i+1][j+1];
	                }
	                else
	                dp[i][j]=false;
	                
	            }
	        }
	    }
	    if(dp[0][0])
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}