#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int x, k;
	cin >> x >> k;
	if(x % k){
		cout << 1 << endl << x << endl;
		return;
	}
	cout << 2 << endl;
	cout << x + 1 << " " << -1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
