#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const ll mxN = 1e5 + 5;
ll n, m;
 
void dijkstra(ll u, ll* d, vector<pair<ll,ll>> *adj){
	d[u] = 0;
	priority_queue<pair<ll, ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	pq.push({0, u});
	while(!pq.empty()){
		pair<ll,ll> x = pq.top(); pq.pop();
		
		if(x.first != d[x.second]) continue;
		for(pair<ll,ll> v: adj[x.second]){
			if(d[v.second] > d[x.second] + v.first){
				d[v.second] = d[x.second] + v.first;
				pq.push({d[v.second], v.second});
			}
		}
	}
 
}
 
int main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	cin >> n >> m;
	vector<pair<ll,ll>> adj1[n + 1];
	vector<pair<ll,ll>> adj2[n + 1];
 
	for(ll i = 0; i < m; ++i){
		ll u, v, w;
		cin >> u >> v >> w;
		adj1[u].push_back({w, v});
		adj2[v].push_back({w, u});
	}
	
	ll d1[n + 1];
	ll d2[n + 1];
 
	for(ll i = 1; i <= n; ++i){
		d1[i] = 1e18;
		d2[i] = 1e18;
	}
	dijkstra(1, d1, adj1);
	dijkstra(n, d2, adj2);
	ll ans = 1e18;
	for(int i = 1; i <= n; ++i){
		for(pair<ll, ll> j: adj1[i]){
			if(d1[i] == 1e18 || d2[j.second] == 1e18) continue;
			ans = min(ans, d1[i] + d2[j.second] + j.first / 2);
		}
	}
	cout << ans << '\n';
 
	return 0;
}
