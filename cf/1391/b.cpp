#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n,m;
		cin>>n>>m;
		string s[n];
		ll i;
		for(i=0;i<n;i++) {
			cin>>s[i];
		}
		ll c=0,j;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				if(s[i][j] == 'R') {
					if(j+1 == m)
						c++;
				}
				else if(s[i][j] == 'D') {
					if(i+1 == n)
						c++;
				}
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}