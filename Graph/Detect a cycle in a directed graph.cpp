class Solution {
public:

   bool isCyclicutil(int v,bool visited[], bool recstack[], vector<int> adj[]){
       if(visited[v]==false){
       visited[v]=recstack[v]=true;
       for(auto it=adj[v].begin();it!=adj[v].end();it++){
           if(!visited[*it] && isCyclicutil(*it,visited,recstack,adj))
           return true;
           else if(recstack[*it])
           return true;
       }
       }
       recstack[v]=false;
       return false;
   }
	bool isCyclic(int V, vector<int> adj[]) {
	   	// code here
	   	bool visited[V], recStack[V];
	   	for(int i=0;i<V;i++){
	   	    visited[i]=false;
	   	    recStack[i]=false;
	   	}
	   for(int i=0;i<V;i++){
	    if(isCyclicutil(i,visited,recStack,adj))
	    return true;
	   }
	    return false;
	}
};