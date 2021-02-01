class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=1;
        }
        int max=0,c=0;
        for(int i=0;i<nums.size();i++){
          if(m.find(nums[i]-1)!=m.end()){
              continue;
          }
            else{
                int x=nums[i];
                c=1;
                while(m.find(x+1)!=m.end()){
                    c++;
                    x++;
                }
                if(max<c){
                    max=c;
                }
            }
        }
        return max;
    }
};