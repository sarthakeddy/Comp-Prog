#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int fac[1000007];

int mul(int a,int b) {
	return a*(ll)b % mod;
}

int power(int a, int b) {
	int rs=1;
	while(b) {
		if(b%2) 
			rs = mul(rs, a);
		a = mul(a,a);
		b/=2;
	}
	return rs;
}

int dv(int a ,int b) {
	return mul(a, power(b,mod-2));
}

int comb(int a,int b) {
	return dv(fac[a], mul(fac[a-b],fac[b]));
}

int add(int a,int b) {
	a+=b;
	if(a>=mod)
		a-=mod;
	if(a<0)
		a+=mod;
	return a;
}

void pre() {
	fac[0]=1;
	for(ll i=1;i<1e6+5;i++) {
		fac[i] = mul(fac[i-1],i);
	}
}

int main() {
	pre();
	ll n;
	cin>>n;
	ll p[n+10],i;
	p[0] = 1;
	p[1] = 2;
	for(i=2;i<=n;i++) {
		p[i] = mul(2, p[i-1]);
	}
	ll ans = (fac[n]%mod) - (p[n-1]%mod);
	if(ans < 0)
		ans += mod;
	ans %= mod;
	cout<<ans<<"\n";
	return 0;
}