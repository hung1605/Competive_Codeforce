#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int a[n];
	for(auto &i : a) cin >> i;
	int min_dis = 1e9;
	bool flag = false;
	for(int i = 0; i < n - 1; i++){
		if(a[i] <= a[i + 1])
			min_dis = min(min_dis, a[i + 1] - a[i]);
		else
			flag = true;
	}
	cout << (flag ? 0 : min_dis / 2 + 1) << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}