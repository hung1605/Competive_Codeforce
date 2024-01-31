#include<bits/stdc++.h>
using namespace std;

void tc(){
    int n, m;
    cin >> n >> m;
    m = m % 2 == 0 ? m : m - 1;
    cout << n * m / 2 << endl;
}

int main(){
    int t; cin >> t;
    while (t--) tc();
}