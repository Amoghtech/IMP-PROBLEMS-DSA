int main()
{
    int res = 0;
    int left[n], right[n];
    memset(left, 0, sizeof(left));
    memset(right, 0, sizeof(right));
    left[0] = arr[0];
    for (int j = 1; j < n; j++)
    {
        left[j] = max(left[j - 1], arr[j]);
    }
    right[n - 1] = arr[n - 1];
    for (int j = n - 2; j >= 0; j--)
    {
        right[j] = max(right[j + 1], arr[j]);
    }
    for (int i = 0; i < n; i++)
    {
        res += (min(left[i], right[i]) - arr[i]);
    }
    return res;

}
    int trappingWater(int a[], int n)
    {

        // Your code here
        int water = 0;
        int l = 0, r = n - 1, leftmax, rightmax;
        leftmax = rightmax = 0;
        while (l <= r)
        {
            if (a[l] <= a[r])
            {
                if (a[l] >= leftmax)
                    leftmax = a[l];
                else
                    water += (leftmax - a[l]);
                l++;
            }
            else
            {
                if (a[r] >= rightmax)
                    rightmax = a[r];
                else
                    water += (rightmax - a[r]);
                r--;
            }
        }
        return water;
    }
