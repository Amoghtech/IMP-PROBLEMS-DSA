// CPP program to check whether we can finish all 
// tasks or not from given dependencies. 
#include <bits/stdc++.h> 
using namespace std; 

// Returns adjacency list representation from a list 
// of pairs. 
vector<unordered_set<int> > make_graph(int numTasks, 
			vector<pair<int, int> >& prerequisites) 
{ 
	vector<unordered_set<int> > graph(numTasks); 
	for (auto pre : prerequisites) 
		graph[pre.second].insert(pre.first); 
	return graph; 
} 

// A DFS based function to check if there is a cycle 
// in the directed graph. 
bool dfs_cycle(vector<unordered_set<int> >& graph, int node, 
			vector<bool>& onpath, vector<bool>& visited) 
{ 
	if (visited[node]) 
		return false; 
	onpath[node] = visited[node] = true; 
	for (int neigh : graph[node]) 
		if (onpath[neigh] || dfs_cycle(graph, neigh, onpath, visited)) 
			return true; 
// 		else if(onpath[neigh])	
	return onpath[node] == false; 
} 

// Main function to check whether possible to finish all tasks or not 
bool canFinish(int numTasks, vector<pair<int, int> >& prerequisites) 
{ 
	vector<unordered_set<int> > graph = make_graph(numTasks, prerequisites); 
	vector<bool> onpath(numTasks, false), visited(numTasks, false); 
	for (int i = 0; i < numTasks; i++) 
		if (!visited[i] && dfs_cycle(graph, i, onpath, visited)) 
			return false; 
	return true; 
} 

int main() 
{ 
	int numTasks = 4; 

	vector<pair<int, int> > prerequisites; 

	// for prerequisites: [[1, 0], [2, 1], [3, 2]] 

	prerequisites.push_back(make_pair(1, 0)); 
	prerequisites.push_back(make_pair(2, 1)); 
	prerequisites.push_back(make_pair(3, 2)); 
	if (canFinish(numTasks, prerequisites)) { 
		cout << "Possible to finish all tasks"; 
	} 
	else { 
		cout << "Impossible to finish all tasks"; 
	} 

	return 0; 
} 
