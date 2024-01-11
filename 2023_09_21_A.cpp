#include <bits/stdc++.h>
using namespace std;

void testcase(){
	string s;
	cin >> s;
	string res = "abc";
	int err = 0;
	for(int i = 0; i < 3; i++){
		if(s[i] != res[i]) err++;
	}
	cout << (err <= 2 ? "YES\n" : "NO\n");
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}