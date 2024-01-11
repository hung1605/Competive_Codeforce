#include <bits/stdc++.h>
using namespace std;

void testcase(){
	long long n, k ,x;
	cin >> n >> k >> x;
	long long nho = k * (k + 1) / 2;
	long long lon = k * (2 * n - k + 1) / 2;
	bool ans = false;
	if(x >= nho and x <= lon) ans = true;
	cout << (ans ? "yes\n" : "no\n");
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}