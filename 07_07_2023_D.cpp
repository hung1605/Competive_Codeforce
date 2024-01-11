#include <bits/stdc++.h>
using namespace std;

void testcase(){
	int n;
	double d, h;
	cin >> n >> d >> h;
	double y[n];
	for(double &i : y) cin >> i;
	sort(y, y + n);
	double total_area = 0;
	double tri_area = h * d / 2;
	// cout << "tri area: " << tri_area << endl;
	for(int i = 0; i < n - 1; i++){
		total_area += tri_area;
		if (y[i] + h >= y[i + 1]){
			double small_h = h - (y[i + 1] - y[i]);
			double small_d = d * small_h / h;
			double small_tri_area = small_h * small_d / 2;
			total_area -=  small_tri_area;
			// cout << "small tri area: " << small_tri_area << endl;
		}
	}
	total_area += d * h / 2;
	cout << fixed << setprecision(7) << total_area << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testcase();
}