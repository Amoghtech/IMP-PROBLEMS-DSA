class Solution {
public:
    
  static  bool compare(const pair<int,int> &a,const pair<int,int> &b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second<b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
   unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
        }
        
        vector<pair<int,int>> p;
        int i=0;
        for(auto it:m){
            p.push_back(it);
        }
        vector<int> v;
        int s=m.size();
        sort(p.begin(),p.end(),compare);
        for(int i=0;i<m.size();i++){
            int freq=p[i].second;
            while(freq--){
                v.push_back(p[i].first);
            }
        }
        return v;
    }
 
    
};