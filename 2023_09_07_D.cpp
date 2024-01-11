#include <bits/stdc++.h>
using namespace std;

// long long gcd (long long a, long long b){
// 	if(b == 0) return a;
// 	return gcd(b, a % b);
// }

// long long lcm(long long a, long long b){
// 	return a * (b / gcd(a, b));
// }

void testcase(){
	long long n, x, y;
	cin >> n >> x >> y;
	long long y_len = n / y, x_len = n / x;
	long long sum_y = 0, sum_x = 0;	
	for(long long i = 1; i <= y_len; i++){
		if(i * y % x == 0) continue;
		sum_y += i;
	}
	for(long long i = 1; i <= x_len; i++){
		if(i * x % y == 0) continue;
		sum_x += n - i + 1;
	}
	cout << "ans: ";
	cout << sum_x - sum_y << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}