#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	int rs=1;
	while(n){
		if(n&1) rs=(1LL*(rs*x)%m)%m;
		n=n>>1;
		x=(1LL*(x%m)*(x%m))%m;
	}
	return rs;
}
