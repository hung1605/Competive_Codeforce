#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n, k;
	cin >> n >> k;
	string s; cin >> s;
	int cnt = 0;
	int len = s.size();
	for(int i = 0; i < len; i++){
		if(s[i] == 'W') continue;
		cnt ++;
		for(int j = i; j < min(i + k, len); j++){
			if(s[j] == 'B'){
				s[j] = 'W';
			}
		}
		i = min(i + k, len) - 1;
	}
	cout << cnt << "\n";
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}