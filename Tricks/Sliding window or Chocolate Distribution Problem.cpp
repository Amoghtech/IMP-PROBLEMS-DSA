#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int m;
        cin >> m;
        int min = 32767;
        for (int i = 0; i + m - 1 < n; i++)
        {
            int diff = a[i + m - 1] - a[i];
            if (diff < min)
                min = diff;
        }
        cout << min << endl;
    }
    return 0;
}