//User function Template for C++

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    // Your Code Here
    map<string,vector<string>> m;
    int n=string_list.size();
    for(int i=0;i<n;i++){
        string oword=string_list[i];
        string nword=oword;
        sort(nword.begin(),nword.end());
        m[nword].push_back(oword);
        
    }
    vector<vector<string>> v;
    for(auto it:m){
        v.push_back(it.second);
        
    }
    return v;
}