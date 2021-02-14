class Solution{
public:

vector<long long> prime;
void sieve(long long n){
    bool isprime[n+1];
    memset(isprime,1,sizeof(isprime));
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    
    
    for(int p=2;p<=n;p++){
        if(isprime[p]){
            prime.push_back(p);
        }
    }

    
    
}

    long long primeProduct(long long L, long long R){
        // code here
        
        long long sq=sqrt(R);
        sieve(sq);
        int mod=1e9+7;
        vector<bool> isprime(R-L+1,1);
        for(long long p:prime){
            long long sm=(L/p)*p;
            
            if(sm<L)sm+=p;
            
            for(int m=sm;m<=R;m+=p){
                isprime[m-L]=false;
            }
        }
        for(int i=L;i<=R;i++){
            if(isprime[i-L]){
                prime.push_back(i);
            }
        }
        
        long long x=1;
        for(int i=0;i<prime.size();i++){
            if(prime[i]>=L && prime[i]<=R)
                 x*=prime[i];
        }
        
        return x%mod;
    }
};