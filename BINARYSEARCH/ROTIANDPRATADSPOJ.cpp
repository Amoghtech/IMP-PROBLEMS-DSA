#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n, int mid)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= mid)
        {
            s += a[i] - mid;
        }
    }
    return s;
}
int main()
{
    // your code goes here
    int n, k;
    cin >> n >> k;
    int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int res = 0, l = 0, h = a[n - 1];
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (check(a, n, mid) == k)
        {
            res = mid;
            break;
        }
        else if (check(a, n, mid) > k)
        {
            l = mid + 1;
        }

        else
        {
            h = mid - 1;
        }
    }
    cout << res;

    return 0;
}