#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll mdAdd(ll a, ll b, ll p) {
	ll res = (a%p + b%p)%p ;
	return res ;
}

ll mdsub(ll a, ll b, ll p) {
	ll res = (a%p - b%p + p)%p ;
	return res ;
}

ll mdPrd(ll a, ll b , ll p) {
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
 
ll modInverse(ll b, ll m)
{
    ll x, y; 
    ll g = gcdExtended(b, m, &x, &y);
 
    if (g != 1)
        return -1;
 
    return (x%m + m) % m;
}
 
ll mdDiv(ll a, ll b, ll m)
{
    a = a % m;
    ll inv = modInverse(b, m);
    if (inv == -1)
    	re -1; //cout << "Division not defined";
    else
	re (inv * a) % m;
}


ll nCr(ll n, ll r, ll mod) {
	if(r>n) return 0;
	r=min(r,n-r) ;
	
	if(r==0) return 1 ;
	
	ll ans=1 ;
	ll toDiv=1 ;
	
	for(ll i=0; i<r; i++) {
		ans = mdPrd(ans, (n-i), mod) ;
		ans = mdDiv(ans, (i+1), mod) ;
	}
	
	return ans;
}

 

