#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		ll d1=a-x, d2=b-y;
		ll i, ans = a*b;

		for(i=1;i<=4;i++) {
			ll aa=a, bb=b, k=n;
			if(i==1) {
				aa -= min(d1, k);
				k -= d1;
				bb -= min(d2, k);
				ans = min(ans, aa*bb);
			}
			else if(i==2) {
				bb -= min(d2, k);
				k -= d2;
				aa -= min(k, d1);
				ans = min(ans, aa*bb);
			}
			else if(i==3) {
				aa -= min(d1, k);
				ans = min(ans, aa*bb);
			}
			else {
				bb -= min(d2, k);
				ans = min(ans, aa*bb);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}