#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		bool v[b+1];
		memset(v,true,sizeof(v));
		for(int i=2;(i*i)<=b;i++){
			if(v[i]){
			for(int j=i*i;j<=b;j+=i){
				v[j]=false;
			}
			}
		}
		int c=0;
		v[0]=v[1]=false;
		for(int i=a;i<=b;i++){
			if(v[i])
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}