#include <bits/stdc++.h>
using namespace std;

void testcase(){
	char a[4][4];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		// win theo hang
		if(a[i][0] == a[i][1] and a[i][1] == a[i][2] and a[i][0] != '.'){
			cout << a[i][0] << endl;
			return;
		}
		// win theo cot
		if(a[0][i] == a[1][i] and a[1][i] == a[2][i] and a[0][i] != '.'){
			cout << a[0][i] << endl;
			return;
		}
	}
	if(a[0][0] == a[1][1] and a[1][1] == a[2][2] and a[0][0] != '.'){
		cout << a[0][0] << endl;
		return;
	}
	if(a[0][2] == a[1][1] and a[1][1] == a[2][0] and a[1][1] != '.'){
		cout << a[0][2] << endl;
		return;
	}
	cout << "DRAW" << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}