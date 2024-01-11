#include <bits/stdc++.h>
using namespace std;

long long tuyetdoi(long long x){
	return x > 0 ? x : -x;
}

void testcase(){
	int n, k, a, b;
	cin >> n >> k >> a >> b;
	long long x[n + 1], y[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> x[i] >> y[i];
	}
	long long a_to_capital = a <= k ? 0 : 1e17;
	long long b_to_capital = b <= k ? 0 : 1e17;
	long long dis_a_b = tuyetdoi(x[a] - x[b]) + tuyetdoi(y[a] - y[b]);
	// cout << "dis_a_b: " << dis_a_b << endl;
	for(int i = 1; i <= k; i++){
		a_to_capital = min(a_to_capital, tuyetdoi(x[a] - x[i]) + tuyetdoi(y[a] - y[i]));
		b_to_capital = min(b_to_capital, tuyetdoi(x[b] - x[i]) + tuyetdoi(y[b] - y[i]));
	}
	cout << min(dis_a_b, a_to_capital + b_to_capital) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}