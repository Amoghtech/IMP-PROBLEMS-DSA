class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
            return "";
        
        string c=strs[0];
        int mine=32768;
        for(int i=1;i<strs.size();i++){
            
            int j=0,a=0,k=0;
            while(j<strs[i].length() && k<c.length()){
                if(strs[i][j]==c[k]){
                    a++;
                }
                else
                    break;
                
                j++;k++;
            }
            mine=min(mine,a);
        }
        
        
        return c.substr(0,mine);
    }
};