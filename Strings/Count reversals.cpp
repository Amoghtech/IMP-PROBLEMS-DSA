#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string x;
	    cin>>x;
	    if(x.length()&1!=0)
	    cout<<-1<<endl;
	    else{
	    stack<char> s;
	    for(int i=0;i<x.length();i++){
	        if(x[i]=='}' && !s.empty()){
	            if(s.top()=='{')
	            s.pop();
	            else
	            s.push(x[i]);
	        }
	        else
	        s.push(x[i]);
	    }
	    int n=0,r=s.size();
	    while(!s.empty() && s.top()=='{'){
	        s.pop();
	        n++;
	    }
	    cout<<r/2+n%2<<endl;
	    }
	}
	return 0;
}