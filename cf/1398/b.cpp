#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n,i;
		string s;
		cin>>s;
		n = s.length();
		vector<ll> v;
		ll c=0;
		for(i=0;i<n;i++) {
			if(s[i]=='1')
				c++;
			else {
				v.push_back(c);
				c=0;
			}
		}
		v.push_back(c);
		sort(v.begin(), v.end(), greater<ll>());
		ll ans=0;
		for(i=0;i<v.size();i+=2)
			ans+=v[i];
		cout<<ans<<"\n";
	}
	return 0;
}