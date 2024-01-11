#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n, k; cin >> n >> k;
	int f[k + 1];
	f[k] = n;
	f[k - 1] = (n % 2 ? n/2 + 1 : n/2);
	for(int i = k - 2; i >= 1; i--){
		f[i] = f[i + 2] - f[i + 1];
	}
	for(int i = 1; i <= k; i++) cout << f[i] << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}