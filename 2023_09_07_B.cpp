#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int d[n + 1], s[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> d[i] >> s[i];
	}
	int k = 1e9;
	for(int i = 1; i <= n; i++){
		k = min(k, d[i] + (s[i] - 1) / 2);
	}
	cout << k << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}