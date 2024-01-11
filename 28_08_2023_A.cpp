#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n, m;
	cin >> n >> m;
	string a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	string name = "vika";
	int index = 0;
	bool containName = false;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(!containName){
				if(a[j][i] == name[index]){
					index ++;
					if(index == 4){
						containName = true;
					}
					break;
				}
			}
		}
	}
	cout << (containName ? "YES\n" : "NO\n");
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}