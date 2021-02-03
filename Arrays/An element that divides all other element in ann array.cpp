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
#define minele(a,n) *min_element(a,a+n);
/*******************************/
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define take(n) \
    int n;      \
    cin >> n
#define takearray(a,n) int a[n];for(int i=0;i<n;i++)cin>>a[i];
int main()
{
    take(n);
    takearray(a,n);
    int f=0,small=minele(a,n);
    for(int i=0;i<n;i++){
        if(a[i]%small)
        {
            f=1;
            break;
        }
    }
    if(!f){
        cout<<small;
    }
    else
    cout<<-1;
}