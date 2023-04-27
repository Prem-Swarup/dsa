ll flr_sqrt(ll x) {

	__int128 ans ; ans=min(x/2, (ll)(1e9+1)) ;
	ll l=1, r=x ;
	if (x<4)
	{
		re 1;
	}
	while(!(ans*ans<=x && (ans+1)*(ans+1)>x)) {
	
		if (ans*ans<x)
		{
			l=ans ;
			ans = (l+r)/2 ;
		}
		if (ans*ans>x) 
		{
			r=ans ;
			ans = (l+r)/2 ;
		}

	}

	return (ll)ans ;
}
