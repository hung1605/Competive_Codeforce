#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    set<int> s;
    int minx = -1e9, maxx = 1e9;
    while (n--) {
      int type, num;
      cin >> type >> num;
      if(type == 1){
        minx = max(minx, num);
      }
      else if(type == 2){
        maxx = min(maxx, num);
      }
      else s.insert(num);
    }
    int ans = maxx - minx + 1;
    for(auto x:s){
      if(x >= minx and x <= maxx) ans--;
    }
    cout << max(0,ans) << '\n';
  }
}
