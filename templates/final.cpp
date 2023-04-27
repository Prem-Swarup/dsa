#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
#include<bits/stdc++.h>
using namespace std;

#define i128 __int128 ;
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define pll pair<long long, long long>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mk make_pair
#define fr(n) for(ll indx = 0; indx < n; indx++)
#define fri(ind, n) for(ll ind = 0; ind < n; ind++)
#define fc(itt, aa, bb) for(auto itt =  aa; itt < bb; itt++)
#define fa(itt, aa, bb) for(auto itt = aa; itt != bb; itt++)
#define fx(x,ax) for(auto &x:ax) 
#define wt while(true)
#define IOS ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define MD2 998244353
#define vpl vector<pair<long long, long long>>
#define stl set<long long> 
#define ql queue<long long>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rd(x) ll x; cin>>x
#define ra(x, n) ll x[n]; fri(iii, n) cin>>x[iii];
#define rs(ssss) string ssss; cin>>ssss; 
#define rv(v, t, n) vector<t> v(n); fri(iiii, n) cin>>v[i] ;
#define lb ;cout<<"\n" ;
#define br break ;
#define cnu continue ;
#define ump unordered_map
#define pq priority_queue
#define yy cout<<"YES" ; 
#define nn cout<<"NO" ; 
#define nnn cout<<-1 ; 
#define re return
#define flush cout.flush() ;
#define mmt memset


typedef vector<int> vi;
typedef vector<long long> vll;


///////////////// MOD //////////////////////
const ll p=MOD ;
ll mdAdd(ll a, ll b) {
	ll res = (a%p + b%p)%p ;
	return res ;
}

ll mdsub(ll a, ll b) {
	ll res = (a%p - b%p + p)%p ;
	return res ;
}

ll mdPrd(ll a, ll b ) {
	ll res = ((a%p)*(b%p))%p ;
	return res ;
}



ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    ll x1, y1; 
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
 
ll modInverse(ll b)
{
    ll x, y; 
    ll g = gcdExtended(b, p, &x, &y);
 
    if (g != 1)
        return -1;
 
    return (x%p + p) % p;
}
 
ll mdDiv(ll a, ll b)
{
    a = a % p;
    ll inv = modInverse(b);
    if (inv == -1)
    	re -1; //cout << "Division not defined";
    else
	re (inv * a) % p;
}


ll nCr(ll n, ll r) {
	if(r>n) return 0;
	r=min(r,n-r) ;
	
	if(r==0) return 1 ;
	
	ll ans=1 ;
	ll toDiv=1 ;
	
	for(ll i=0; i<r; i++) {
		ans = mdPrd(ans, (n-i)) ;
		ans = mdDiv(ans, (i+1)) ;
	}
	
	return ans;
}
 
/////////////////////////////////////////////////



	
template <typename T>
bool comp(T a, T b) {


	return true ;
}






void solve() {
	rd(n) ;
	


	fri(i, n) {

		
	}



	return ;
}


int main() {
	IOS ;
	int t=1 ;
	cin>>t ;
	while(t--) {
		solve() ;
		cout<<"\n" ;
	}
	

	return 0;
}
