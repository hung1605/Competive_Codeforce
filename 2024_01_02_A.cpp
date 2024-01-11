#include <iostream>
using namespace std;

int main(){
  int t; cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b) cout << c;
    if(a == c) cout << b;
    if(c == b) cout << a;
    cout << endl;
  }
}
