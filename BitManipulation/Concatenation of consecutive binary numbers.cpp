class Solution
{
public:
    int concatenatedBinary(int n)
    {
        long long int res = 1;
        for (int i = 2; i <= n; i++)
        {
            int totalbits = (int)log2(i) + 1;
            res = (res << totalbits) + i;
            if (res > 32767)
                res = res % 1000000007;
        }
        return res % 1000000007;
    }
};