#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<vector<int>> v, int n, int row, int k)
{
    if (row == n)
    {
        return 0;
    }

    int s = 0;
    for (int i = 0; i < v[row].size(); i++)
    {
        s += v[row][i];
    }

    if (s > k)
    {
        return knapsack(v, n, row + 1, k);
    }
    else
    {
        return max(knapsack(v, n, row + 1, k), s + knapsack(v, n, row + 1, k - s));
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
        }

        int res = knapsack(v, n, 0, k);

        cout << res;
    }
    return 0;
}