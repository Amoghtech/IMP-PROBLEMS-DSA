// A Dynamic Programming solution
// for subset sum problem
#include <stdio.h>

// Returns true if there is a subset of set[]
// with sun equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if
    // there is a subset of set[0..j-1] with sum
    // equal to i
    bool subset[n + 1][sum + 1];

    // Fill the subset table in botton up manner
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 && j == 0)
            {
                subset[i][j] = true;
            }
            else if (i == 0)
            {
                subset[i][j] = false;
            }
            else if (j == 0)
            {
                subset[i][j] = true;
            }
            else
            {
                int val = set[i - 1];
                if (j >= val)
                {
                    if (subset[i - 1][j - val] == true)
                    {
                        subset[i][j] = true;
                    }
                }
                else
                {
                    if (subset[i - 1][j] == true)
                    {
                        subset[i][j] = true;
                    }
                }
            }
        }
    }

    /* // uncomment this code to print table
	for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= sum; j++)
		printf ("%4d", subset[i][j]);
	printf("\n");
	}*/

    return subset[n][sum];
}

// Driver code
int main()
{
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}
// This code is contributed by Arjun Tyagi.
