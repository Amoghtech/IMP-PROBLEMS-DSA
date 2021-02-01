#include <iostream>
using namespace std;
int search(int a[], int n, int key)
{
    int l = 0, h = n - 1;
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[l] <= a[mid])
        {
            if (key >= a[l] && key <= a[mid])
                h = mid - 1;
            else 
                l = mid + 1;
        }
        else
        {
            if (key >= a[mid] && key <= a[h])
                l = mid + 1;
            else
               h = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i = -0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout << search(a, n, x);

    return 0;
}