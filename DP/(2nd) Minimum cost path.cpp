
// A Naive recursive implementation
// of MCP(Minimum Cost Path) problem
#include <bits/stdc++.h>
using namespace std;

// Driver code
class Pair
{

public:
    string path;
    int i;
    int j;

    Pair(string x, int i, int j)
    {
        this->path = x;
        this->i = i;
        this->j = j;
    }
};
int main()
{
    int R, C;
    cin >> R >> C;
    int cost[R][C];
    int dp[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cin >> cost[i][j];
    }

    for (int i = R - 1; i >= 0; i--)
    {
        for (int j = C - 1; j >= 0; j--)
        {
            if (i == R - 1 && j == C - 1)
            {
                dp[i][j] = cost[i][j];
            }
            else if (i == R - 1)
            {
                dp[i][j] = dp[i][j + 1] + cost[i][j];
            }
            else if (j == C - 1)
            {

                dp[i][j] = dp[i + 1][j] + cost[i][j];
            }
            else
            {
                dp[i][j] = min(dp[i + 1][j], dp[i][j + 1]) + cost[i][j];
            }
        }
    }
    cout << dp[0][0] << endl;
    queue<Pair> q;
    Pair k("", 0, 0);
    q.push(k);
    while (q.size() > 0)
    {
        Pair remp = q.front();
        q.pop();
        if (remp.i == R - 1 && remp.j == C - 1)
        {
            cout << remp.path << endl;
        }
        else if (remp.i == R - 1)
        {
            Pair t(remp.path + "H", remp.i, remp.j + 1);
            q.push(t);
        }
        else if (remp.j == C - 1)
        {
            Pair t(remp.path + "V", remp.i + 1, remp.j);
            q.push(t);
        }
        else
        {

            if (dp[remp.i][remp.j + 1] < dp[remp.i + 1][remp.j])
            {
                Pair t(remp.path + "H", remp.i, remp.j + 1);
                q.push(t);
            }
            else if (dp[remp.i][remp.j + 1] > dp[remp.i + 1][remp.j])
            {
                Pair t(remp.path + "V", remp.i + 1, remp.j);
                q.push(t);
            }
            else
            {
                Pair t1(remp.path + "V", remp.i + 1, remp.j);
                q.push(t1);
                Pair t2(remp.path + "H", remp.i, remp.j + 1);
                q.push(t2);
            }
        }
    }

    return 0;
}
