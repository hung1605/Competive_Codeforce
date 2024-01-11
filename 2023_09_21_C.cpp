#include <bits/stdc++.h>
using namespace std;

void testcase(){
	string a[10];
	for(int i = 0; i < 10; i++){
		cin >> a[i];
	}
	int res = 0;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j <= 10; j++){
			int add = (a[i][j] == 'X' ? 1 + min(min(i, 9 - i), min(j, 9 - j)) : 0);
			res += add;
			// if(add) cout << add << "\n";
		}
	}
	cout << res << "\n";
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}