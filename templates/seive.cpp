#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#pragma gcc optimize("O3")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC optimize("O3","unroll-loops")
const int N = 1e7+5 ;


//ll mp[N] ;

void SieveOfEratosthenes(ll n)
{
    ll m=sqrt(n) ;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p <= m; p++) {
    
        if (prime[p] == true) {   
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
 
}
 



void Sieve22(bool prime[], ll n)
{
    ll m=sqrt(n) ;
    //bool prime[n + 1];
    //memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p <= m; p++) {
    
        if (prime[p] == 0) {   
            for (ll i = p * p; i <= n; i += p) {
                prime[i] = 1;
                //mp[i] = p ;
            }
        }
    }
 
}


void sss(ll mp[], ll n) {
    ll m=sqrt(n) ;
    bool prime[m+1]={0} ;
    for (int i = 1; i < n+1; ++i)
    {
        mp[i] = 0 ;
    }
    Sieve22(prime, m) ;


    cout<<2<<" " ;
    for(int j=2*2; j<=n; j+=2) mp[j]=2 ;
    
    for (int i = 3; i <= m; i+=2)
    {
        if (prime[i]==0)
        {
            cout<<i<<" " ;
            for(int j=i*i; j<=n; j+=i) mp[j]=i ;
        }
    }
}



void sieve(ll mp[], ll n) {
    ll m = 3163 ;
    //m=sqrt(n) ;
    //return ;
//    ll m = sqrt(n) ;
    for (int i = 1; i < 11; ++i)
    {
        //mp[0] = 0 ;
    }
    return ;
    for (ll i = 4; i <= n; i+=2)
    {
        mp[i]=2 ;
    }

    return ;

    for (int i = 3; i <= m; i+=2)
    {
        if (mp[i]==0)
        {
            //mp[i]=i ;
            for (int j = i*i; j <= n; j+=i)
            {
                mp[j]=i ;
            }
        }
    }
}




int main() {
    //unordered_map<ll, ll> mp ;
    ll mp[10000005]={0} ;
    auto start = chrono::high_resolution_clock::now();
    //SieveOfEratosthenes(1000) ;
    sieve(mp, 10000000) ;
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout<<endl<<duration.count()<<endl ;
    return 0;
    start = chrono::high_resolution_clock::now();
    sss(mp, 10000000) ;
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout<<endl<<duration.count()<<endl ;
    return 0;
}