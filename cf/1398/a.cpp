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

		ll a[n],i;
		for(i=0;i<n;i++) {
			cin>>a[i];
		}
		ll sum = a[0] + a[1];
		if(sum <= a[n-1]) {
			cout<<1<<" "<<2<<" "<<n<<"\n";
		}
		else
			cout<<"-1\n";
	}
	return 0;
}