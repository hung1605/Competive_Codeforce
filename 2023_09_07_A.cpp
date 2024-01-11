#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int a, b, c;
	cin >> a >> b >> c;
	int diff = abs(a - b);
	int res;
	if(diff % 2 == 0){
		res = (diff / 2 + c - 1) / c;
	}
	else{
		res = (diff / 2) / c + 1;
	}
	cout << res << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}