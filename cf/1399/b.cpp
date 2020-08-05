#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		ll a[n],b[n],i,mn1=99999999999, mn2=mn1;
		for(i=0;i<n;i++) {
			cin>>a[i];
			mn1=min(mn1,a[i]);
		}
		for(i=0;i<n;i++) {
			cin>>b[i];
			mn2=min(mn2,b[i]);
		}
		ll ans=0;
		for(i=0;i<n;i++) {
			if(a[i] == mn1) {
				if(b[i]!=mn2) {
					ans+=abs(mn2-b[i]);
				}
			}
			else if(b[i] == mn2) {
				if(a[i]!=mn1) {
					ans += abs(mn1-a[i]);
				}
			}
			else {
				ll dif1 = a[i]-mn1;
				ll dif2 = b[i]-mn2;
				if(dif1 <= dif2) {
					ans += (dif2-dif1);
					ans+=dif1;
				}
				else {
					ans += (dif1-dif2);
					ans += dif2;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}