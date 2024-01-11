#include <bits/stdc++.h>
using namespace std;

void testcase(){
	string s;
	cin >> s;
	int n = s.size();
	int cntA = count(s.begin(),s.end(),'A');
	int min_dis = 1e9, cur = -1;
	for(int i = 0; i < n; i++){
		if(s[i] == 'B'){
			min_dis = min(min_dis, i - cur - 1);
			cur = i;
		}
	}
	min_dis = min(min_dis, n - cur - 1);
	cout << cntA - min_dis << endl;

}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
