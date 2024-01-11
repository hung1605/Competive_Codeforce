#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n, m, k, H;
	cin >> n >> m >> k >> H;
	int h[n];
	for(auto &i : h) cin >> i;
	// cout << endl;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int flag = false;
		int heightDiff = abs(H - h[i]);
		for(int j = 1; j < m; j++){
			if(j * k == heightDiff and heightDiff){
				cnt++;
				flag = true;
				break;
			}
		}
		// if(flag) cout << h[i] << " ";
	}
	// cout << endl;
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}