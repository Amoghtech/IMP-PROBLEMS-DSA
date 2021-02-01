int largestpowerof2(int n)
{

    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    x--;
    return x;
}

int countSetBits(int n)
{
    // Your logic here
    if (n == 0)
        return 0;

    int x = largestpowerof2(n);
    int upto2raisex = (1 << (x - 1)) * x;
    int removemsb = n - (1 << x) + 1;
    int ans = upto2raisex + removemsb + countSetBits(n - (1 << x));
    return ans;
}