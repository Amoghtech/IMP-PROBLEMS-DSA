#include <iostream>
using namespace std;

void perm(string x,int l,int r){
      
    
    if(l==r){
        cout<<x<<" ";
    
    }
    
    else{
    for(int i=l;i<=r;i++){
        
        swap(x[l],x[i]);
        
        perm(x,l+1,r);
        
        swap(x[l],x[i]);
        
    }
    }
}





int main() {
	//code
	
	int t;
	cin>>t;
	while(t--){
	    string x;
	    cin>>x;
	    
	    perm(x,0,x.length()-1);  
	    cout<<endl;
	}
	
	
	return 0;
}