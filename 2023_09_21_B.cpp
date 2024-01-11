#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int a[n];
	int zero = 0;
	int m = 1e9;
	long pro = 1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] != 0) pro *= a[i];
		if(a[i] == 0) zero ++;
		m = min(m, a[i]);	
	} 
	if(zero >= 1){
		if(zero == 1) cout << pro << "\n";
		else cout << 0 << "\n";
	}
	else{
		cout << pro / m * (m + 1) << "\n" ;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}