  function<bool(ll)> kk = [&](ll md) {
  
    return false ;
  } ;

  ll mid, last=r ;
  while(l<=r){
      mid = l+r>>1 ;
    if(kk(mid)) {
      l = mid+1 ;
      last = l ;
    } else {
      r = mid-1 ;
    }
  }
