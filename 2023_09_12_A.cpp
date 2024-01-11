#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n; cin >> n;
	int sum = 0;
	bool full0 = true;
	for(int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		if(tmp) full0 = false;
		sum = sum ^ tmp;
	}
	if(full0){
		cout << 0 << endl;
		return;
	}

	if(sum == 0) {
		cout << 1 << endl;
		cout << 1 << " " << n << endl;
		return;
	}
	if(n % 2 == 0){
		cout << 2 << endl;
		cout << 1 << " " << n << endl;
		cout << 1 << " " << n << endl;
	}
	else{
		cout << 4 << endl;
		cout << 1 << " " << n << endl;
		cout << 1 << " " << n - 1 << endl;
		cout << n - 1 << " " << n << endl;
		cout << n - 1 << " " << n << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}