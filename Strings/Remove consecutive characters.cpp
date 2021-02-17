
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        stack<char> st;
        for(int i=0;i<S.length();i++){
            if(st.empty()){
                st.push(S[i]);
            }
            else{
                if(st.top()!=S[i]){
                    st.push(S[i]);
                }
            }
            
        }
        string r="";
        while(!st.empty()){
            r+=st.top();
            st.pop();
        }
        reverse(r.begin(),r.end());
        
        return r;
    }
};