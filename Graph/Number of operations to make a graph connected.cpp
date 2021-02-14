class Solution
{
public:
    void dfs(vector<vector<int>> &graph, vector<bool> &visited, int i)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            for (auto it = graph[i].begin(); it != graph[i].end(); it++)
            {
                if (!visited[*it])
                {
                    dfs(graph, visited, *it);
                }
            }
        }
    }

    int makeConnected(int n, vector<vector<int>> &connections)
    {
        if (n - 1 > connections.size())
            return -1;

        vector<vector<int>> graph(n);
        for (int i = 0; i < connections.size(); i++)
        {
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool> visited(n, false);
        // vector<int> recstack;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                c++;
                dfs(graph, visited, i);
            }
        }
        return c - 1;
    }
};