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
	    map<char,int> m;
	    for(int i=0;i<x.length();i++){
	        m[x[i]]++;
	    }
	    int max=-32768;
	    for(auto it=m.begin();it!=m.end();it++){
	        if(max<it->second){
	            max=it->second;
	        }
	    }
	    
	    int c=x.length()-max+1;
	    if(max<=c)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}