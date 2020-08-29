#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

ll sz[(ll)2e5+10], parent[(ll)2e5+10];

ll find_set(ll x) {
	if(x == parent[x])
		return x;
	return parent[x] = find_set(parent[x]);
}

void union_set(ll x, ll y) {
	if(sz[x] < sz[y])
		swap(x,y);
	parent[y] = x;
	sz[x] += sz[y];
}

int main() {
	ll n,m;
	cin>>n>>m;
	ll x,y,i;
	for(i=1;i<=n;i++) {
		parent[i] = i;
		sz[i] = 1;
	}
	for(i=0;i<m;i++) {
		cin>>x>>y;
		x = find_set(x);
		y = find_set(y);
		if(x != y) {
			union_set(x,y);
		}
	}
	ll mx=0;
	for(i=1;i<=n;i++)
		mx = max(mx, sz[i]);
	cout<<mx;
	return 0;
}