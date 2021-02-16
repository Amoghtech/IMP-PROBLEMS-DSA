#include <bits/stdc++.h>
using namespace std;

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))
#define max 100
// utility function to search
// complete string from any
// given index of 2d char array
int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool solve(int i,
           int j, string needle,
           int size, int indx, int m, int n, char input[][max])
{
    int found = 0;
    if (input[i][j] != needle[indx])
        return false;

    for (int d = 0; d < 8; d++)
    {
        int k = 0, r = i + x[d], c = j + y[d];

        for (k = 1; k < size; k++)
        {
            if (r >= 0 && r <= m-1 && c >= 0 &&
                c <= n-1 && needle[k] == input[r][c])
            {
                r = r + x[d]; c = c + y[d];
            }
            else
                 break;
        }
        if (k == size)
            return true;
    }

    return false;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        char input[max][max];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> input[i][j];
            }
        }
        string needle;
        cin >> needle;
        int f=0,size = needle.length();
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; j++)
            {
                if (solve(i, j, needle, size, 0, m, n, input))
                {
                    f=1;
                    cout << i << " " << j<<", ";
                }
            }
        }
        if(f==0){
            cout<<-1;
        }
        cout << endl;
    }

    return 0;
}
