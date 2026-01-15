#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n = 10;
    int a[n];
    for(int i = 0; i < n; i++) a[i] = n - i;
    sort(a, a + n, [](int a, int b){
        return 1;
    });
    cout << a[n - 1];
}
