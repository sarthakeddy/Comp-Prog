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
		ll a[n],i,mx=0, mn=150;
		map<ll,ll> mp;
		vector<ll> v;
		for(i=0;i<n;i++) {
			cin>>a[i];
			if(!mp[a[i]]) {
				mp[a[i]]=1;
				v.push_back(a[i]);
			}
		}
		sort(v.begin(), v.end());
		ll p=v[0],f=0;
		p++;
		for(i=1;i<v.size();i++) {
			if(v[i] != p) {
				f=1;
				break;
			}
			p++;
		}
		if(f==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}