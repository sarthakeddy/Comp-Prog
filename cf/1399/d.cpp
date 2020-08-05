#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	fast
	ll t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		string s;
		cin>>s;
		vector<pair<ll,ll>> need;
		queue<pair<ll,ll>> need0, need1;
		ll pr0=0, pr1=0;
		if(s[0] == '0') {
			pr0 = 1;
			need1.push({1,1});
		}
		else {
			pr1 = 1;
			need0.push({1,0});
		}
		ll k=2;
		ll ans[n],i;
		ans[0] = 1;
		for(i=1;i<n;i++) {
			if(s[i] == '0') {
				if(need0.size()!=0) {
					pair<ll,ll> temp = need0.front();
					need0.pop();
					ans[i] = temp.first;
					need1.push({ans[i], 1});
				}	
				else {
					need1.push({k,1});
					ans[i] = k;
					k++;
				}
			}
			else {
				if(need1.size()!=0) {
					pair<ll,ll> temp = need1.front();
					need1.pop();
					ans[i] = temp.first;
					need0.push({ans[i], 0});
				}	
				else {
					need0.push({k,1});
					ans[i] = k;
					k++;
				}
			}
		}
		cout<<k-1<<"\n";
		for(i=0;i<n;i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}