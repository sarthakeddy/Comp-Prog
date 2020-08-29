#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;

int main() {
	ll t,d,s;
	cin>>d>>t>>s;
	if(s*t >= d)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}