#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll a,b;
		cin>>a>>b;
		ll dif=abs(a-b);
		ll cnt=0, i=10;
		for(i=10;i>=1;i--) {
			ll x=dif/i;
			cnt+=x;
			dif -= (x*i);
		}
		cout<<cnt<<"\n";
	}
	return 0;
}