int longestIncreasingSubsequence(vector<int> arr) {

vector<int> v;
    v.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        if(v.back()<arr[i]){
            v.push_back(arr[i]);
        }
        else{
            int x=lower_bound(v.begin(),v.end(), arr[i])-v.begin();
            v[x]=arr[i];
        }
    }
    return v.size();

}
