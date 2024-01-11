#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % n == 0){
		cout << "NO\n";
		return;
	}
	int average = sum / n;
	
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}