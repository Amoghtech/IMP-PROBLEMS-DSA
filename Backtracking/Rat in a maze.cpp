
// User function template for C++
bool issafe(int i, int j, int n, bool visited[][MAX], int m[][MAX])
{
    if (i < 0 || j < 0 || j >= n || j >= n || visited[i][j] == 1 || m[i][j] == 0)
        return false;

    return true;
}
// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5
void maze(int i, int j, string &path, vector<string> &paths, int n, bool visited[][MAX], int m[MAX][MAX])
{

    if (i == -1 || j == -1 || i >= n || j >= n || visited[i][j] == 1 || m[i][j] == 0)
    {
        return;
    }

    if (i == n - 1 && j == n - 1)
    {
        paths.push_back(path);
        return;
    }

    visited[i][j] = 1;

    if (issafe(i + 1, j, n, visited, m))
    {
        path += "D";
        maze(i + 1, j, path, paths, n, visited, m);
        path.pop_back();
    }
    if (issafe(i, j - 1, n, visited, m))
    {
        path += "L";
        maze(i, j - 1, path, paths, n, visited, m);
        path.pop_back();
    }
    if (issafe(i, j + 1, n, visited, m))
    {
        path += "R";
        maze(i, j + 1, path, paths, n, visited, m);
        path.pop_back();
    }

    if (issafe(i - 1, j, n, visited, m))
    {
        path += "U";
        maze(i - 1, j, path, paths, n, visited, m);
        path.pop_back();
    }
    visited[i][j] = 0;
}
vector<string> findPath(int m[MAX][MAX], int n)
{
    // Your code goes here
    bool visited[MAX][MAX];
    memset(visited, 0, sizeof(visited));
    string path;
    vector<string> paths;
    maze(0, 0, path, paths, n, visited, m);
    //  reverse(paths.begin(),paths.end());
    return paths;
}