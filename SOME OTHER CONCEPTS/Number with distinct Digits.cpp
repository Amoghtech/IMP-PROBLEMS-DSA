#include <bits/stdc++.h>
using namespace std;
int distinct(int n){
    int a[10]={0};
    while(n){
        int r=n%10;
        a[r]=1;
        n/=10;
    }
    int c=0;
    for(int i=0;i<10;i++){
        if(a[i])
        c++;
    }
    return c;
}
int count(int n){
int c=0;
    while(n){
        c++;
        n/=10;
    }
    return c;
}

int main()
{
int n;
cin>>n;
while(n<32767){
    int countd=distinct(n+1);
    int tcount=count(n+1);

    if(countd==tcount)
    {
        n++;
        break;
    }
    else
    n++;
}
cout<<n;
return 0;
}
