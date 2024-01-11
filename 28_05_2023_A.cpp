#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout << n - a[i] + 1 << " ";
	}
	cout << endl;

}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
