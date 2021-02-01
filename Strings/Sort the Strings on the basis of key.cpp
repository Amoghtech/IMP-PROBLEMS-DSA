#include<bits/stdc++.h>
#include <string.h> 
using namespace std;
string findkey(int key,string str){
  char *cs = new char[str.length() + 1];
  strcpy(cs,str.c_str());
  char* s=strtok(cs," ");

   while(key>1){
s=strtok(NULL," ");
key--;
}
return (string)s;
}
int toint(string x){
	int num=0,p=1;
	for(int i=x.length()-1;i>=0;i--){
     num+=((x[i]-'0')*p);
	 p*=10;
	}
	return num;
}
bool numericcomparator(pair<string,string> a,pair<string,string> b){
	int key1,key2;
	key1=toint(a.second);
	key2=toint(b.second);
	return key1<key2;
}

bool lexicocomparator(pair<string,string> a,pair<string,string> b){

	return a.second<b.second;
}
int main() {

	int n;
	cin>>n;
	cin.get();
	string a[100];
	for(int i=0;i<n;i++){
		getline(cin,a[i]);
	}

	int key;
	string reverse,order;
	cin>>key>>reverse>>order;
	pair<string,string> p[100];
	for(int i=0;i<n;i++){
		p[i].first=a[i];
		p[i].second=findkey(key,a[i]);
	}
	if(order=="numeric"){
		sort(p,p+n,numericcomparator);
	}
	else {
		sort(p,p+n,lexicocomparator);
	}

	if(reverse=="true"){
for(int i=0;i<n/2;i++){
	swap(p[i],p[n-i-1]);
}
	}

	for(int i=0;i<n;i++){
		cout<<p[i].first<<endl;
	}
	return 0;
}