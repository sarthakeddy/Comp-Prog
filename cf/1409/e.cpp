#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n,k;
		cin>>n>>k;
		ll y[n], i;
		vector<ll> x(n);
		for(i=0;i<n;i++)
			cin>>x[i];
		for(i=0;i<n;i++)
			cin>>y[i];
		ll ans=1, j;
		sort(x.begin(), x.end());
		vector<ll> l(n), r(n);
		j=n-1;
		for(i=n-1; i>=0; i--) {
			while(x[j] > (x[i]+k))
				j--;
			r[i] = j-i+1;
			if(i+1 < n)
				r[i] = max(r[i], r[i+1]);
		}
		j=0;
		for(i=0;i<n;i++) {
			// cout<<x[i]<<" ";
			while(x[j] < (x[i]-k))
				j++;
			l[i] = i-j+1;
			if(i>0)
				l[i] = max(l[i], l[i-1]);
		}
		// cout<<"\n";
		// for(i=0;i<n;i++)
		// 	cout<<l[i]<<" ";
		// cout<<"\n";
		// for(i=0;i<n;i++)
		// 	cout<<r[i]<<" ";
		// cout<<"\n";
		for(i=0;i<n-1;i++)
			ans = max(ans, l[i]+r[i+1]);
		cout<<ans<<"\n";
	}
	return 0;
}