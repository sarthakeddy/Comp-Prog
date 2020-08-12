#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll r,g,b,w;
		cin>>r>>g>>b>>w;
		ll od=0, ev=0;
		if(r%2==0)
			ev++;
		else
			od++;
		if(g%2)
			od++;
		else
			ev++;
		if(b%2)
			od++;
		else
			ev++;
		if(w%2)
			od++;
		else
			ev++;
		if((ev==4 && od==0) || (ev==3 && od == 1))
			cout<<"Yes\n";
		else if(r==0 || g==0 || b==0)
			cout<<"No\n";
		else if(ev==1 || ev == 0) {
			cout<<"Yes\n";
		}
		else
			cout<<"No\n";
	}
	return 0;
}