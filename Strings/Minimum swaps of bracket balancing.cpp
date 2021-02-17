#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<int> pos;
	    for(int i=0;i<n;i++){
	    if(s[i]=='[')
	    pos.push_back(i);
	    }
	    int count,p,sum;
	    count=sum=p=0;
	    
	    for(int i=0;i<n;i++){
	        if(s[i]=='[')
	        {
	            count++;
	            p++;
	        }
	        else if(s[i]==']'){
	            count--;
	        }
	        
	        
	        if(count<0){
	            sum+=pos[p]-i;
	            swap(s[i],s[pos[p]]);
	            p++;
	            count=1;
	        }
	    }
	    cout<<sum<<endl;
	}
	
	return 0;
}