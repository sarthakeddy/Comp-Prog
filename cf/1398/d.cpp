#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

ll dp[300][300][300];
int main() {
	ll r,g,b;
	cin>>r>>g>>b;
	ll red[r], green[g], blue[b], i;
	for(i=0;i<r;i++)
		cin>>red[i];
	for(i=0;i<g;i++)
		cin>>green[i];
	for(i=0;i<b;i++)
		cin>>blue[i];
	ll j,k;
	sort(red, red+r);
	sort(green, green+g);
	sort(blue, blue+b);
	for(i=0;i<=r;i++) {
		for(j=0;j<=g;j++) {
			for(k=0;k<=b;k++) {
				if(i && j)
					dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-1][k] + (red[i-1]*green[j-1]));
				if(j && k)
					dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k-1] + (green[j-1]*blue[k-1]));
				if(i && k)
					dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][k-1] + (red[i-1]*blue[k-1]));
			}
		}
	}
	cout<<dp[r][g][b];
	return 0;
}