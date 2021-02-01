//Actually lowest number from 1 to n will be LCM of numbers from 1 to N

int main()
{

  long long  int ans = 1, n = 20;
    for (long long int i = 1; i <= n; i++)
    {
        ans = (ans * i) / __gcd(ans, i); //Built in function
    }
    cout << ans;

    return 0;
}