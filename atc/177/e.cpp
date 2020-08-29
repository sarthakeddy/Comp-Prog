#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll mod = 1e9+7;
const ll MAXN = 1000001;

ll spf[MAXN];  
void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 
        spf[i] = i; 
	for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
    for (int i=3; i*i<MAXN; i++) 
    { 
        if (spf[i] == i) 
        { 
            for (int j=i*i; j<MAXN; j+=i) 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
}
unordered_map<ll,ll> mp;
bool getFactorization(int x) 
{ 
    vector<int> ret;
    map<ll,bool> vis; 
    while (x != 1) 
    { 
    	if(!vis[spf[x]]) {
        	ret.push_back(spf[x]); 
        	vis[spf[x]]=true;
    	}
        x = x / spf[x]; 
    }
    for(ll i:ret) {
    	if(mp.find(spf[i]) != mp.end()) 
        	return false;
        mp[spf[i]]++;
    }
    return true; 
}

int main() {
	sieve();
	ll n;
	cin>> n;
	ll a[n],i ,gd;
	bool f=false;
	for(i=0;i<n;i++) {
		cin>>a[i];
		if(!getFactorization(a[i]))
			f=true;
		if(i==0)
			gd=a[i];
		else
			gd = __gcd(gd,a[i]);
	}
	if(!f)
		cout<<"pairwise coprime";
	else if(gd == 1)
		cout<<"setwise coprime";
	else
		cout<<"not coprime";
	return 0;
}