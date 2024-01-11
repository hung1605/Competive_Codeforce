#include <bits/stdc++.h>
using namespace std;

void testcase(){
	string s; cin >> s;
	if(s[0] == '?') 
		s[0] = '0';
	for(int i = 1; i < (int)s.size(); i++){
		if(s[i] == '?'){
			if(s[i - 1] == '0') s[i] = '0';
			else s[i] = '1';
		}
	}
	cout << s << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
