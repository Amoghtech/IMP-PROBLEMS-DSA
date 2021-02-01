class Solution {
public:
    
    void swap(int *x,int *y){
        int t;
        t=*x;
        *x=*y;
        *y=t;
    }
    
    void nextPermutation(vector<int>& nums) {
        
        int j=0,i=nums.size()-2;
        for(;i>=0;i--){
            if(nums[i]<nums[i+1])
                break;
        }
        if(i<0){
            sort(nums.begin(),nums.end());
        }
        else{
        for( j=nums.size()-1;nums[j]<=nums[i];j--);
        swap(&nums[i],&nums[j]);
        sort(nums.begin()+i+1,nums.end());
        }
    }
};