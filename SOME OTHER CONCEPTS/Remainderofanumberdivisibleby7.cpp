/*You are required to complete this method */
int remainderWith7(string n)
{
    //Your code here
    int a[]={1,3,2,-1,-3,-2};
    
    int res=0,i=0;
    for(int j=n.length()-1;j>=0;j--){
        int dig=n[j]-'0';
        res+=dig*a[i];
        i=(i+1)%6;
        res=res%7;
    }
    if(res<0)
    res=(res+7)%7;
    
    return res;
}