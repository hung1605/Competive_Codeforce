#include <bits/stdc++.h>
using namespace std;

struct score{
	int point, penalty;
	char name;
};

void testcase(){
	int n, m, h;
	cin >> n >> m >> h;
	int t[n][m];
	for(auto &i : t){
		for(auto &j : i) cin >> j;
	}
	for(auto &i : t){
		sort(i, i + m);
	}
	int v[n][m];
	score sc[n];
	for(int i = 0; i < n; i++){
		sc[i].point = sc[i].penalty = 0;
		if(i == 0) sc[i].name = 'l';
		else sc[i].name = 'r';
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(j == 0) 
				v[i][j] = t[i][j];
			else
				v[i][j] = v[i][j - 1] + t[i][j];

			if(v[i][j] <= h){
				sc[i].point += 1;
				sc[i].penalty += v[i][j];
			}
		}
	}
	sort(sc, sc + n, [](score a, score b){
		if(a.point == b.point){
			return a.penalty < b.penalty;
		}
		else return a.point > b.point;
	});
	for(int i = 0; i < n; i++){
		if(sc[i].name == 'l'){
			cout << i + 1 << endl;
			return;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}