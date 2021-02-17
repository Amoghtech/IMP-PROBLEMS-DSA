
// return the smallest window in S with all the characters of P
// if no such window exists, return "-1" 
string smallestWindow (string S, string P){
    // Your code here
    int hashstr[256]={0};
    int hashp[256]={0};
    
    for(int i=0;i<P.length();i++){
        hashp[P[i]]++;
    }
    if (S.length() < P.length()) {
        // cout << "No such window exists";
        return "-1";
    }
    int f=0,start,startindex,count,minlen=32767;
    start=startindex=count=0;
    for(int end=0;end<S.length();end++){
        hashstr[S[end]]++;
        if(hashstr[S[end]]<=hashp[S[end]]){
            count++;
        }
        
        if(count==P.length()){
            while(hashp[S[start]]==0 || hashstr[S[start]]>hashp[S[start]]){
                if(hashp[S[start]]==0 || hashstr[S[start]]>hashp[S[start]])
                hashstr[S[start]]--;
                start++;
            }
            f=1;
            int len=end-start+1;
            if(minlen>len){
                minlen=len;
                startindex=start;
            }
        }
        
    }
    if(f==0){
        return "-1";
    }
    return S.substr(startindex,minlen);
}