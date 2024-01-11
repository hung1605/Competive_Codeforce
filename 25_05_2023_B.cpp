#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 1, ans = 1;
	for (int i = 1; i < (int)s.size(); ++i){
		if(s[i] == s[i - 1]){
			cnt ++;
			ans = max(ans, cnt);
		}
		else cnt = 1;
	}
	cout << ans + 1 << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
