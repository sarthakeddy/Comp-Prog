#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	fast
	ll n, m;
	cin>>n>>m;
	ll a[n], b[m], c[n], i, j, ans;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	ll k;
	ans = 1ll<<11;
	for(i=0;i<n;i++) {
		ll temp = 1ll<<11;
		for(j=0;j<m;j++){
			temp = min(temp, a[i]&b[j]);
		}
		
		for(k=0;k<n;k++) {
			ll ch = 1ll<<11;
			for(j=0;j<m;j++) {
				ch = min(ch, ((a[k]&b[j]) | temp ));
			}

			temp |= ch;
		}
		ans = min(ans, temp);
	}
	cout<<ans<<"\n";
	return 0;
}