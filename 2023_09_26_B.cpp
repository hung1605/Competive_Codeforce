#include <bits/stdc++.h>
using namespace std;

#define ii pair<int,int>
#define ll long long

void testcase(){
	int n;
	cin >> n;
	ll a[n];
	a[0] = 2; a[1] = 3;
	for(int i = 2; i < n; i++){
		a[i] = a[i - 1] + 1;
		while(3 * a[i] % (a[i - 1] + a[i - 2]) == 0){
			a[i] += 1;
		}
	}
	for(int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}