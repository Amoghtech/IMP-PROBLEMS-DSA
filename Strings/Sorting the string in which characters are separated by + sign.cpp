#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int n = x.length();
    for (int i = 0; i < n - 2; i += 2)
    {
        for (int j = 0; j < n - 2 - i; j += 2)
        {
            if (x[j] > x[j + 2])
            {
                char t;
                t = x[j];
                x[j] = x[j + 2];
                x[j + 2] = t;
            }
        }
    }
    cout << x;

    return 0;
}