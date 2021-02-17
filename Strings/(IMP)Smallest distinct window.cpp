
#define MAX 256
string findSubString(string str)
{
    // Your code goes here
    int d=0,n=str.length();
    bool visited[MAX]={false};
    for(int i=0;i<n;i++){
        if(visited[str[i]]==false)
        {visited[str[i]]=true;
        d++;}
        }
        
    int countchar[MAX]={0};
    
    int start=0,startindex=0,minlen=INT_MAX,count=0;
    for(int end=0;end<n;end++){
        countchar[str[end]]++;
        
        if(countchar[str[end]]==1){
            count++;
        }
        
        if(count==d){
            while(countchar[str[start]]>1){
                if(countchar[str[start]]>1){
                    countchar[str[start]]--;
                }
                start++;
            }
            
            int len=end-start+1;
            if(minlen>len){
                minlen=len;
                startindex=start;
            }
        }
        
    }
        // cout<<str.substr(startindex,minlen)<<endl;
        return str.substr(startindex,minlen);
}