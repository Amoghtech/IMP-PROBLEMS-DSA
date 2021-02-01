#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, m;
    cin >> n >> m;
    int a[n] = {0};
    int b[m] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, s1 = 0, s2 = 0, res = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            res += max(s1, s2) + a[i];
            s1 = 0;
            s2 = 0;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            s1 += a[i];

            i++;
        }
        else
        {
            s2 += b[j];
            j++;
        }
    }

    while (i < n)
    {
        s1 += a[i++];
    }
    while (j < m)
    {
        s1 += b[j++];
    }
    res += max(s1, s2);
    cout << res << endl;
    return 0;
}