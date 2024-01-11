#include <bits/stdc++.h>
using namespace std;

#define ii pair<int,int>
#define ll long long

void testcase(){
	int n, k; cin >> n >> k;
	int a[n];
	bool ans = false;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == k) ans = true;	
	} 
	cout << (ans ? "yes\n" : "no\n");
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}