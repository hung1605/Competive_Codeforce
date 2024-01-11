#include <ios>
#include <iostream>
#include <utility>

const int INF = 100000005;

void testcase(){
  int n; std::cin >> n;
  int a[n];
  int t1 = INF, t2 = INF;
  int ans = 0;
  for(int &i : a){
    std::cin >> i;
    if(t1 > t2) std::swap(t1, t2);
    if(i <= t1) t1 = i;
    else if(i <= t2) t2 = i;
    else {
      t1 = i;
      ans ++;
    }
  } 
  std::cout << ans << '\n';
}

int main(){
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  int t; std::cin >> t;
  while (t--) testcase(); 
}
