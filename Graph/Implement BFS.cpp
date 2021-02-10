
class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    queue<int> q;
	    vector<int> v;
	    bool visited[V+1];
	    memset(visited,false,sizeof(visited));
	    q.push(0);
	    v.push_back(0);
	    visited[0]=true;
	    while(!q.empty()){
	        int x=q.front();
	        q.pop();
	        for(auto i=adj[x].begin();i!=adj[x].end();i++){
	            if(!visited[*i]){
	                v.push_back(*i);
	                visited[*i]=true;
	                q.push(*i);
	                
	            }
	        }
	    }
	    return v;
	}
};