#define countbit(n) __builtin_popcount(n)
#define _USE_MATH_DEFINES
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <set>
#include <string.h>
#include <map>
#include <queue>
#include <cmath>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
axi-32768(NULL);                    \
    cout.tie(NULL)

string en = "\n";
string sp = " ";

/*******************************/

#define mod 1000000007
#define INaxLLONG_MAX
#define NINF LLONG_Max
#define PII 3.141592653589793238462643383279502884197169399375

#define vp(vi, x) \
    cin >> x;     \
    vi.pb(x);
#define bsearch(a, x) binary_search(all(a), x)
#define LB(a, x) (std::lower_bound(all(a), x) - a.B)
#define UB(a, x) (std::upper_bound(all(a), x) - a.B)
#define smallest(a) *min_element(a.begin(), a.end())
#define largest(a) *max_element(a.begin(), a.end())
#define all(a) a.begin(), a.end()
#define sortdesc(a) sort(a.begin(), a.end(), greater<ll>())
#define ps(x, y) fixed << setprecision(y) << x
#define sz(a) a.size()
#define E end()
#define B begin()

/*******************************/

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define gcd gcd
#define lcm(a, b) ((a * b) / gcd(a, b))
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<ll, ll>
#define vi vector<ll>
#define mii map<ll, ll>
#define mci map<char, ll>
#define msi map<string, ll>
#define pqb priority_queue<ll>
#define pqs priority_queue<ll, vi, greater<ll>>

/*******************************/
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define bloop(i, a, b) for (ll i = a; i >= b; i--)
#define trav(g, arr)     \
    for (auto g : arr)   \
    {                    \
        cout << g << sp; \
    }                    \
    cout << endl;

/*******************************/

/*vi factor;
void fact(ll n)
{

    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                factor.pb(i);
            else
            {
                factor.pb(i);
                factor.pb(n/i);
            }
        }
    }

}*/

/*******************************/

vi primenum;
void findprime(ll n)
{
    ll prime[n + 1] = {0};

    prime[1] = 1;

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == 0)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = 1;
        }
    }

    for (ll p = 2; p <= n; p++)
    {
        if (prime[p] == 0)
        {
            primenum.pb(p);
        }
    }
}

/*******************************/

/*ll lcmofarray(vi arr)
{
    ll n = sz(arr);
    ll ans=1;
    for(ll i=0;i<n;i++)
    {
        ans = (arr[i]*ans)/(__gcd(arr[i],ans));
    }
    return ans;

}*/

/*******************************/

/*ll gcdofarray(vi arr)
{
    ll n = sz(arr);
     ll ans=arr[0];
     for(ll i=1;i<n;i++)
            ans = __gcd(ans,arr[i]);
     return ans;
}*/

/*******************************/

/*ll findgcd(ll a, ll b)
{

    if (b == 0)
        return a;
    return findgcd(b, a % b);

}*/

/*******************************/

/*ll expomod(ll x,ll y,ll p)
{
    ll res=1;
    x = x%p;
    if(x==0)
        return 0;
    while(y>0)
    {
        if(y&1)
            res = ((res%p)*(x%p))%p;
        y=y>>1;
        x = ((x%p)*(x%p))%p;
    }
    return res;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s=0,c1=0,c2=0;
    for(int i=1;i<10;i++){
    //  c1++;
    //  c2++;
     if(i%3==0){
         
         s+=i;
     }
     else if(i%5==0){
         s+=i;
         
     }

    }
    cout<<s;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int s=2,a=1,b=2,c=0;
    for(int i=1;i<10;i++){
    c=a+b;
    if(c%2==0)
    s+=c;
    a=b;
    b=c;
    
    }
    cout<<s;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
 int max=-32767;

 while(n%2==0){
max=2;
n/=2;
 }
 for(int i=3;i<=sqrt(n);i++){
     while(n%i==0){
         if(max<i){
             max=i;
             n/=i;
         }
     }
 }
 if(n>2){
     if(max<n)
     max=n;
 }
 cout<<max;
    return 0;
}

bool ispali(int n,int *t){
    if(n>=1 && n<=9){
        return n==t%10;
    }
    
    if(!ispali(n/10,t)){
        return false;
    }

    *t/=10;

    return n%10==*t%10;
}


bool  ispal(ll n){
    ll *t=new ll(n);
   return  ispali(n,t);
}
int main(){
int max=-32768;
for(int i=999;i>=100;i--){
    for(int j=i;j>=100;j--){
        int product=i*j;
        int number=product,res=0;
        while(number!=0){
            res=res*10+number%10;
            number/=10;
        }
        if(res==product && max<product)
        max=product;
    }
}
cout<<product;



    return 0;
}