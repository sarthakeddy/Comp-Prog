#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll n,m,x,y;
	cin>>n>>m>>x>>y;
	vector<pair<ll,ll>> v;
	v.push_back({x,y});
	map<pair<ll,ll>, ll> mp;
	mp[{x,y}] =1;
	ll i = x, j = y, f=0;
	pair<ll,ll> last = {x,y};
	while(v.size() != (n*m)) {
		if((j-1)!=0) {
			for(ll k= j-1;k>=1;k--) {
				v.push_back({i,k});
				mp[{i,k}] = 1;
				last = {i,k};
			}
		}
		for(ll k= j+1;k<=m;k++) {
			v.push_back({i,k});
			mp[{i,k}] = 1;
			last={i,k};
		}
		if(f==0 && (i-1)!=0) {
			i-=1;
			j = last.second;
			v.push_back({i,j});
			continue;
		}
		else if(i-1 == 0)
			f=1;
		if(f==1 && (x+1)!=(n+1)) {
			i=x+1;
			j = last.second;
			f=2;
			v.push_back({i,j});
		}
		else if(f==2 && i+1 != (n+1)) {
			j = last.second;
			i += 1;
			v.push_back({i,j});
		}
		else break;
		// cout<<i<<" ";
	}
	for(auto it: v)
		cout<<it.first<<" "<<it.second<<"\n";
	return 0;
}