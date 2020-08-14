#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	fast
	ll t;
	cin>>t;
	while(t--) {
		ll n,i;
		cin>>n;
		string s;
		cin>>s;
		ll digit[n+1] = {0};
		for(i=1;i<=n;i++) {
			digit[i] = s[i-1]-'0';
		}
		ll pre[n+1]={0};
		unordered_map<ll,ll> mp;
		for(i=1;i<=n;i++) {
			pre[i] += pre[i-1] + digit[i];
			mp[i-pre[i]]++;
		}
		ll ans = mp[0];
		for(i=1;i<=n;i++) {
			mp[i-pre[i]]--;
			ans += mp[i-pre[i]];
		}
		cout<<ans<<"\n";
	}
	return 0;
}