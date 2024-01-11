#include <bits/stdc++.h>
using namespace std;

vector<int> List[200005];
bool chuax


void testcase(){
	int n; cin >> n;
	set<int> s;
	vector<pair<int, int>> sp;
	for(int i = 0; i < n - 1; i++){
		int u, v; cin >> u >> v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
	int read = 1;
	
	
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
