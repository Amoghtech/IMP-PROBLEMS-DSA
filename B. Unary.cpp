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

const int  modi=1e6+3;
int main()
{
 string x,y="";
 cin>>x;
 for(int i=0;i<x.length();i++){
     if(x[i]=='>'){
         y+="1000";
     }
     else if(x[i]=='<'){
         y+="1001";
     }
     else if(x[i]=='+'){
         y+="1010";
     }else if(x[i]=='-'){
         y+="1011";
     }else if(x[i]=='.'){
         y+="1100";
     }else if(x[i]==','){
         y+="1101";
     }else if(x[i]=='['){
         y+="1110";
     }else if(x[i]==']'){
         y+="1111";
     }

 }
long long p=1,ans=0;
for(int i=y.length()-1;i>=0;i--){
    if(y[i]=='1')
    ans=(ans+p)%modi;
     
     p=p*2%modi;
}
cout<<ans<<endl; 
    return 0;
}