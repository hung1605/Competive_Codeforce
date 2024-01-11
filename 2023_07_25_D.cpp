#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int a[n];
	int last = n * (n + 1) / 2;
	for(int i = 0; i < n - 1; i++) cin >> i;
	vector<int> prefix;
	set<int> s;
	int missingIndex = -1;
	for(int i = 0; i < n - 2; i++){
		int diff = a[i + 1] - a[i];
		if(diff <= n){
			prefix.push_back(diff);
			s.insert(diff);
		} 
		else{
			prefix.push_back(-1);
			missingIndex = i;	
		}
	}
	int cnt = 0;
	for(auto i : s){
		if(i > n) cnt++;
	}
	if(cnt > 1){
		cout <<
	}
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}