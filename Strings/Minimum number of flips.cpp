#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string x;
	    cin>>x;
	    int a=0,len=x.length();
	    for(int i=0;i<x.length();i++){
	    if(i%2==0 && x[i]=='1')
	    a++;
	    
	    if(i&2!=0 && x[i]=='0')
	    a++;
	    
	     }
	    
	     int p=min(a,len-a);
	    cout<<p<<endl;
	}
	return 0;
}