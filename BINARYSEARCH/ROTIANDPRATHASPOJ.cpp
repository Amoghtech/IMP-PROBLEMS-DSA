#include <iostream>
using namespace std;

bool check(int a[], int n, int mid, int p)
{
    int prathas = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 2, t = 0;
        t = a[i];
        prathas++;
        while (t <= mid)
        {
            t = t + (j * a[i]);
            if (t <= mid)
            {
                prathas++;
            }
            j++;
        }
    }
    if (prathas >= p)
    {
        return true;
    }
    return false;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        int n;
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0, l = 0, h = 100;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (check(a, n, mid, p))
            {
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans;
    }

    return 0;
}