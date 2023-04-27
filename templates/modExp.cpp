// Iterative C++ program to compute modular power
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
/* Iterative Function to calculate (x^y)%p in O(log y) */
#define ll long long

ll power(long long x, long long y, long p)
{
	long long res = 1;	 

	x = x % p; 
	
	if (x == 0) return 0; 

	while (y > 0)
	{
		if (y & 1)
			res = (res*x) % p;


		y = y>>1; 
		x = (x*x) % p;
	}
	return res;
}

// Driver code
int main()
{
	int x = 4;
	long long y = (1<<14)-2;
	int p = MOD;
	cout << "Power is " << (6*power(x, y, p))%MOD<<endl ;
	return 0;
}

// This code is contributed by shubhamsingh10

