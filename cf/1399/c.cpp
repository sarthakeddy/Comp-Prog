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
		ll n;
		cin>>n;
		ll w[n],i;
		unordered_map<ll,ll> mp,mk;
		for(i=0;i<n;i++) {
			cin>>w[i];
			mp[w[i]] ++;
			mk[w[i]] ++;
		}
		ll mx=0;
		for(ll s=2;s<=100;s++) {
			ll c=0;
			for(i=0;i<n;i++) {
				if(mk[w[i]] > 0) {
					ll dif = (s-w[i]);
					if(mk[dif] != 0 && dif!=w[i]) {
						mk[w[i]]--;
						mk[dif]--;
						c++;
					}
					else if(dif == w[i] && mk[dif]>1) {
						mk[w[i]]--;
						mk[dif]--;
						c++;
					}
				}
			}
			mk=mp;
			mx=max(c,mx);
		}
		cout<<mx<<"\n";
	}	
	return 0;
}