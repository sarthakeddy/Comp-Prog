#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n,s;
		cin>>n>>s;
		ll ans=0, base=1, c=1;
		while(1) {
			ll k=n, sum=0, dig=0;
			while(k!=0) {
				sum += (k%10);
				k /= 10;
			}
			if(sum > s) {
				ll k=n;
				for(ll i=1;i<=c;i++) {
					dig = k%10;
					k/=10;
				}
				if(dig!=0)
					dig=(10-dig);
				n += (dig*base);
				ans += (dig*base);
			}
			else
				break;
			base*=10ll;
			c++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}