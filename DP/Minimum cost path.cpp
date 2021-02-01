
// A Naive recursive implementation
// of MCP(Minimum Cost Path) problem
#include <bits/stdc++.h>
    using namespace std;

// Driver code
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
    cout << dp[0][0];

    return 0;
}
