#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

void testcase(){
	int l, r;
	cin >> l >> r;
	
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}