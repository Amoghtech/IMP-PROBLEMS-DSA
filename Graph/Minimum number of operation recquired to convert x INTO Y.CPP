#define nbits(n) __builtin_popcount(n)
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mod 1000000007
#define up(a, x) upper_bound(a.begin(), a.end(), x) - a.begin()
#define lp(a, x) lower_bound(a.begin(), a.end(), x) - a.begin()
#define maxv(a) max_element(a.begin(), a.end()) - a.begin();
#define minv(a) min_element(a.begin(), a.end()) - a.begin();
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
#define minele(a, n) *min_element(a, a + n);
/*******************************/
#define w(x)  \
    ll x;     \
    cin >> x; \
    while (x--)
#define take(n) \
    ll n;       \
    cin >> n
#define takearray(a, n)        \
    ll a[n];                   \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define takeab(a, b) \
    ll a, b;         \
    cin >> a >> b;

struct node
{
    ll val;
};

bool bfs(ll a, ll b, vector<ll> &arr)
{

    queue<node> q;
    node n;
    n.val = a;
    arr.push_back(a);
    q.push(n);
    set<int> visited;
    while (!q.empty())
    {
        node t = q.front();
        q.pop();

        if (t.val == b)
        {
            return true;
        }
        visited.insert(t.val);
        if (t.val * 2 == b || t.val * 10 + 1 == b)
        {
            return true;
        }

        if (visited.find(t.val * 2) == visited.end())
        {
            node k;
            k.val = t.val * 2;
            arr.push_back(k.val);
            q.push(k);
        }
        if (visited.find(t.val * 10 + 1) == visited.end())

        {
            node k;
            k.val = t.val * 10 + 1;

            arr.push_back(k.val);
            q.push(k);
        }
        return false;
    }
}

    bool dfs(ll a, ll b, vector<ll> & arr)
    {
        arr.push_back(a);
        if (a < b)
        {

            if (dfs(a * 2, b, arr))
            {
                return true;
            }
            if (dfs(a * 10 + 1, b, arr))
            {
                return true;
            }
        }
        if (a == b)
            return true;
        else
            return false;
    }

    int main()
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> arr;
        if (dfs(a, b, arr))
        {
            cout << "YES";
            cout << arr.size();
            for (int i = 0; i < arr.size(); i++)
                cout << arr[i] << " ";
        }
        else
        {
            cout << "NO";
        }
        return 0;
    }