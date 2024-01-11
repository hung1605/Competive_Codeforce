#include <bits/stdc++.h>
using namespace std;

#define ii pair<ll,int>
#define ll long long

void testcase(){
	ll n; cin >> n;
	ll a[n + 5];
	for(ll i = 1; i <= n; i++){
		cin >> a[i];
	}
	ll q; cin >> q;
	vector<ll> ans;
	while(q--){
		ll l, k; cin >> l >> k;
		ll bit = a[l];
		ll index = l;
		ll r = -1;
		while(index <= n and k <= bit){
			bit = a[index + 1] & bit;
			if(bit >= k) r = index;
			else break;
			index ++;
		}
		cout << r << " ";
	}
	cout << endl;
}

int main(){
	ll t; cin >> t;
	while(t--) testcase();
}