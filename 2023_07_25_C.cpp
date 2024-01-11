#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n, k; cin >> n >> k;
	int a[n + 1];
	for(auto i = 1; i <= n; i++) cin >> a[i];
	vector<int> first, last;
	for(int i = 1; i <= n; i++)
		if(a[i] == a[1])
			first.push_back(i);
	for(int i = n; i >= 1; i--)
		if(a[i] == a[n])
			last.push_back(i);
	if(last.size() < k or first.size() < k){
		cout << "NO\n";
		return;
	}
	if(a[1] == a[n]){
		if(last.size() >= k) cout << "YES\n";
		else cout << "NO\n";
		return;
	}
	if(first[k - 1] < last[k - 1]) cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}