#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n,x,y;
		cin>>n>>x>>y;
		if(n==2) {
			cout<<x<<" "<<y<<"\n";
			continue;
		}
		ll dif=y-x;
		ll k=n-1, i;
		for(i=k; i>=2; i--) {
			if(dif%i == 0) {
				break;
			}
		}
		vector<ll> v;
		v.push_back(x);
		v.push_back(y);
		k=dif/i;
		ll w=x+k;
		while(w != y) {
			v.push_back(w);
			w += k;
		}
		w=x;
		ll p=0;
		while(v.size() != n) {
			if(!p) {
				w -= k;
				if(w<1) {
					p^=1;
					w=y;
					continue;
				}
				v.push_back(w);
			}
			else {
				w += k;
				v.push_back(w);
			}
		}
		for(auto it: v)
			cout<<it<<" ";
		cout<<"\n";
	}
	return 0;
}