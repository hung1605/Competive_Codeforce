#include <bits/stdc++.h>
using namespace std;

void testcase(){
	long long n, x;
	cin >> n >> x;
	long long a[n + 5];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	long long step = a[1];
	bool canadd = false;
	long long side = 1;
	for(long long i = 2; i <= n; i++){
		if(x >= (a[i] - a[i - 1]) * (i - 1) and canadd == false){
			x -= (a[i] - a[i - 1]) * (i - 1);
			step += a[i] - a[i - 1];
			side ++;
		}
		else{
			canadd = true;
		}
	}
	// cout << "fill: " << tmp - x << endl;
	// cout << "step: " << step << " x: " << x << " side: " << side << endl;
	cout << step + x / side << "\n";
}

int main(){
	long long t; cin >> t;
	while(t--) testcase();
}
