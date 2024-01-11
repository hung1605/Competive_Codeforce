#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] - b[i] > 0) cnt ++;
	}
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
	// write for me a check prime method
}