#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int a[n], b[n], pa[n], pb[n];
	for(auto &i : a) cin >> i;
	for(auto &i : b) cin >> i;
	for(int &i : pa) i = 1;
	for(int &i : pb) i = 1;
	map<int, int> mp, mp2, tmp;
	if(n == 1){
		if(a[0] == b[0]) cout << 2 << endl;
		else cout << 1 << endl;
		return;
	}
	for(int i = 1; i < n; i++){
		if(a[i] == a[i - 1]) pa[i] = pa[i - 1] + 1;
		if(i == n - 1 or a[i] != a[i - 1]){
			if(a[i] != a[i - 1]) mp[a[i - 1]] = max(mp[a[i - 1]], pa[i - 1]);
			if(i == n - 1) mp[a[i]] = max(mp[a[i]], pa[i]);
		}
	}
	for(int i = 1; i < n; i++){
		if(b[i] == b[i - 1]) pb[i] = pb[i - 1] + 1;
		if(i == n - 1 or b[i] != b[i - 1]){
			if(b[i] != b[i - 1]) mp2[b[i - 1]] = max(mp2[b[i - 1]], pb[i - 1]);
			if(i == n - 1) mp2[b[i]] = max(mp2[b[i]], pb[i]);
		}
	}
	tmp = mp;
	for(auto &item : mp)
		if(mp2.find(item.first) != mp2.end())
			item.second += mp2[item.first];
	for(auto &item : mp2)
		if(tmp.find(item.first) != tmp.end())
			item.second += tmp[item.first];
	// cout << "mp1:\n";
	// for(auto item : mp){
	// 	cout << item.first << " " << item.second << endl;
	// }
	// cout << "mp2:\n";
	// for(auto item : mp2){
	// 	cout << item.first << " " << item.second << endl;
	// }
	// cout << "tmp:\n";
	// for(auto item : tmp){
	// 	cout << item.first << " " << item.second << endl;
	// }
	int ans = 0;
	for(auto item : mp)
		ans = max(ans, item.second);
	for(auto item : mp2)
		ans = max(ans, item.second);
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
