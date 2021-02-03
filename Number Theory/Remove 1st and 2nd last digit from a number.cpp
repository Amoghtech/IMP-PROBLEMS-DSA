#define nbits(n) __builtin_popcount(n)
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mod 1000000007
#define up(a, x) upper_bound(a.begin(), a.end(), x) - a.begin()
#define lp(a, x) lower_bound(a.begin(), a.end(), x) - a.begin()
#define maxele(a) max_element(a.begin(), a.end()) - a.begin();
#define minele(a) min_element(a.begin(), a.end()) - a.begin();
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pairi pair<ll, ll>
#define vi vector<ll>
#define mapi map<ll, ll>
#define mapci map<char, ll>
#define mapsi map<string, ll>
#define pq priority_queue<ll>
#define pqr priority_queue<ll, vi, greater<ll>>

/*******************************/
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define take(n) \
    int n;      \
    cin >> n
#define takeab(a, b) \
    int a;           \
    int b;           \
    cin >> a >> b;
int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
int main()
{
    take(n);
    if (n > 0)
    {
        cout << n << endl;
    }
    else
    {
        int x = -1 * n, del = 2;
        string inp = to_string(x);
        string inp1 = inp.substr(0, inp.length() - del);
        string inp2 = inp.substr(inp.length() - del + 1,
                                 inp.length());
        int final1 = stoi(inp1 + inp2);
        del = 1;
        inp = to_string(x);
        inp1 = inp.substr(0, inp.length() - del);
        inp2 = inp.substr(inp.length() - del + 1,
                          inp.length());

        int final2 = stoi(inp1 + inp2);
        int r = -1 * min(final1, final2);
        cout << r;
    }
    return 0;
}