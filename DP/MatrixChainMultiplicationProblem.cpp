
// C++ program using memoization
#include <bits/stdc++.h>
using namespace std;

// Function for matrix chain multiplication
int matrixChainMemoised(int *arr, int n)
{
    int dp[n - 1][n - 1];

    for (int g = 0; g < n - 1; g++)
    {
        for (int i = 0, j = g; j < n - 1; i++, j++)
        {
            if (g == 0)
            {
                dp[i][j] = 0;
            }
            else if (g == 1)
            {
                dp[i][j] = arr[i] * arr[j] * arr[j + 1];
            }
            else
            {
                int min = 32767;
                for (int k = i; k < j; k++)
                {
                    int l = dp[i][k];
                    int m = dp[k + 1][j];
                    int c = arr[i] * arr[k + 1] * arr[j + 1];
                    int t = l + m + c;
                    if (min > t)
                    {
                        min = t;
                    }
                }
                dp[i][j] = min;
            }
        }
    }
    return dp[0][n - 1];
}

// Driver Code
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum number of multiplications is "
         << matrixChainMemoised(arr, n);
}