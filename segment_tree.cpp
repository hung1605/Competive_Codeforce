#include <bits/stdc++.h>
using namespace std;

int a[100] = {0, 1, 2, 3, 4, 5, 6, 7 ,8}, n = 8, node[100];

void build(int id, int l, int r){

	if(l == r){
		node[id] = a[l];
		printf("l:%d r:%d node[%d]: %d\n", l, r, id, node[id]);
		return;
	}

	int mid = (l + r) / 2;
	build(id * 2, l, mid);
	build(id * 2 + 1, mid + 1, r);

	node[id] = node[id * 2] + node[id * 2 + 1];
	printf("l:%d r:%d node[%d]: %d\n", l, r, id, node[id]);
}


int get(int id, int l, int r, int u, int v){
	if(r < u or v < l) return 0;
	if(u <= l and r <= v) return node[id];
	int mid = (l + r) / 2;
	int suml = get(id * 2, l, mid, u, v);
	int sumr = get(id * 2 + 1, mid + 1, r, u, v);
	return suml + sumr;
}

int main(){
	build(1, 1, 8);
	get(2, 4);
}