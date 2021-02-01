class Solution {
public:
    
    bool check(vector<int> a,int mid,int rhour){
        int time=0;
        for(int p:a){
            time+=(p-1)/mid+1;
        }
        return time<=rhour;
       
    }
    
    int minEatingSpeed(vector<int>& piles, int H) {
        
       
        int l=1,h=pow(10,9),ans=0;
        while(l<h){
            int mid=(l+h)/2;
            if(check(piles,mid,H)){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        
        return l;
    }
};



//  if(mid!=0){
//         for(int i=0;i<a.size();i++){
//             if(a[i]<=mid){
//                 c++;
//             }
//             else{
//                 int x=mid,t=a[i],j=2;
//                 c++;
//                 while(x<t){
//                     c++;
//                     x=mid*j;
//                     j++;
//                 }
//             }
//         }
//         if(c<=rhour)
//             return true;
//         else
//         return false;
//         }
//         else
//             return false;