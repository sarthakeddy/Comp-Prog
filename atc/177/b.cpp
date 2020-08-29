#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	string s,t;
	cin>>s>>t;
	ll mx=t.length();
	ll n=s.length(), m=t.length();
	for(ll i=0;i<=(n-m);i++) {
		ll c=0;
		for(ll j=0;j<m;j++) {
			if(s[j+i] != t[j])
				c++;
		}
		mx =min(mx, c);
	}
	cout<<mx;
	return 0;
}