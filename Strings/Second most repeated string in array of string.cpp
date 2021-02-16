
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int> m;
        
        for(int i=0;i<n;i++){
        m[arr[i]]+=1;    
        }
        int f,s;
        f=s=INT_MIN;
        for(auto i=m.begin();i!=m.end();i++){
         if(f<i->second){
             s=f;
             f=i->second;
         }
         else if(s<i->second && i->second!=f)
         s=i->second;
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second==s){
                return i->first;
            }
        }
        
        
    }
};