#include <bits/stdc++.h>
using namespace std;

bool isPowOfFour(long long num, long long k){
	while(num > 1){
		if(num % k !=0) return false;
		num /= k;
	}
	return true;
}

void testcase(){
    long long n; cin >> n;
	bool flag = false;
	for(int k = 2; k <= 100000; k++){
		for(int q = 2; q <= 20; q++){
			if(isPowOfFour((q - 1)*n + 1, k)){
				flag = true;	
				cout << "q: " << q << " k: " << k << endl;
				break;
			}
		}
	}
	cout << (flag ? "YES\n" : "NO\n");
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}
