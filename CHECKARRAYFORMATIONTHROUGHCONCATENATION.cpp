class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]=i+1;
        }
        
        
        for(int i=0;i<pieces.size();i++){
            if(pieces[i].size()==1 && m[pieces[i][0]]!=0){
                continue;
            }
            else if(pieces[i].size()>1 && m[pieces[i][0]]!=0){
                
                int itr=m[pieces[i][0]];
                
                for(int j=1;j<pieces[i].size();j++){
                    if(arr[itr]==pieces[i][j]){
                        
                        itr++;
                        if(itr>=arr.size() && j<pieces[i].size()-1){
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};