#include <bits/stdc++.h>
using namespace std;

bool same(int a, int b){
	return a % 2 == b % 2;
}

void testcase(){
	int n; cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	} 
	sort(b, b + n);
	bool flag = true;
	for(int i = 0; i < n; i++){
		if(!same(b[i], a[i]))
			flag = false;
	}
	cout << (flag ? "YES\n" : "NO\n");
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}