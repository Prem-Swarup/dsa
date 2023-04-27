// C++ program to find the nCr%p based on optimal Dynamic Programming implementation
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define lli long long int

// Returns (val1 * val2) % mod
ll moduloMultiplication(ll val1, ll val2,ll mod)
{

    // Initialize the result
    ll ans = 0;

    // Update val1 if it is greater than or equal to mod
    val1 %= mod;

    while (val2) {

        // If val2 is odd, add a with result
        if (val2 & 1)
            ans = (ans + val1) % mod;

        // Here we assume that doing 2*val1 doesn't cause overflow
        val1 = (2 * val1) % mod;
        val2 = val2/2;
    }
    return ans;
}

// C++ function for extended Euclidean Algorithm
lli gcdExtended(lli val1, lli val2,lli* xx,lli* yy);

// Function to find modulo inverse of val2 if inverse does not exist it returns -1
lli modInverse(lli val2, lli mod)
{

    // used in extended GCD algorithm
    lli xx, yy; 
    lli g = gcdExtended(val2, mod, &xx, &yy);

    // Return -1 if val2 and mod are not co-prime
    if (g != 1)return -1;

    // mod is added to handle negative xx
    return (xx % mod + mod) % mod;
}

// Function for extended Euclidean Algorithm to find modular inverse.
lli gcdExtended(lli val1, lli val2,lli* xx,lli* yy)
{

    // Base Case
    if (val1 == 0) {
        *xx = 0, *yy = 1;
        return val2;
    }

    // To store results of recursive call
    lli x1, y1;

    lli gcd = gcdExtended(val2 % val1, val1, &x1, &y1);

    // Update xx and yy using results of recursive call
    *xx = y1 - (val2 / val1) * x1;
    *yy = x1;
    return gcd;
}

// Function to compute val1/val2 under modlo mod
lli modDivide(lli val1, lli val2,lli mod)
{

    val1 = val1 % mod;
    lli inv = modInverse(val2, mod);
    if (inv == -1)
        // Divison not defined
        return 0;
    else
        return (inv * val1) % mod;
}

// Function to calculate nCr % p
int computencr(int n, int r, int x)
{

    // Base case this case is not possible
    if (r > n)
        return 0;

    // For larger r optimization need to be done
    if (r > n - r)
        r = n - r;

    // ans stores the current result 
    lli ans = 1;

    for (int i = 1; i <= r; i++) {

        /*
             Derived formula for calculating the result is
             C(n,r-1)*(n-r+1)/r
             this Function calculates ans*(n-i+1) % x.
        */

        ans = moduloMultiplication(ans, (n + 1 - i), x);
    
        // Function calculates ans/i % x
        ans = modDivide(ans, i, x);
    }
    return ans;
}
