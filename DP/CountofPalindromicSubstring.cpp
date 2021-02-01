// A C++ dynamic programming
// solution for longest palindrome

#include <bits/stdc++.h>
using namespace std;

// Function to print a substring
// str[low..high]
void printSubStr(
    string str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << str[i];
}

// This function prints the
// longest palindrome substring
// It also returns the length of
// the longest palindrome
int longestPalSubstr(string str)
{
    // get length of input string
    int n = str.size();

    // table[i][j] will be false if substring
    // str[i..j] is not palindrome.
    // Else table[i][j] will be true
    bool dp[n][n];

    int c = 0;

    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = g; j < n; j++, i++)
        {
            if (g == 0)
            {
                dp[i][j] = true;
            }
            else if (g == 1)
            {
                dp[i][j] = str[i] == str[j];
            }
            else
            {
                if (str[i] == str[j] && dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }

            if (dp[i][j])
                c++;
        }
    }
    return c;
}

// Driver Code
int main()
{
    string str = "abccbc";
    cout << "\nLength is: "
         << longestPalSubstr(str);
    return 0;
}
