#include <iostream>
using namespace std;

void find(string s)
{
    int n = s.length();
    bool dp[n][n];
    int ri = 0, rj = 0, lmax = -32768;
    // memset(dp,false,sizeof(dp));
    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = i + g; j < n; j++, i++)
        {
            if (g == 0)
            {
                dp[i][j] = true;
            }
            else if (g == 1)
            {
                dp[i][j] = s[i] == s[j];
            }
            else
            {
                if (dp[i + 1][j - 1] && s[i] == s[j])
                {
                    dp[i][j] = true;
                }
                else
                    dp[i][j] = false;
            }

            if (dp[i][j] && (j - i) > lmax)
            {
                lmax = j - i;
                ri = i;
                rj = j;
            }
        }
    }
    string c = "";
    for (int x = ri; x <= rj; x++)
    {
        c += s[x];
    }
    cout << c;
}

int main()
{
    //code

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        find(s);
        cout << endl;
    }
    return 0;
}