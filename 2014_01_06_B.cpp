#include<iostream>
#include <string>

int main(){
  int t; std::cin >> t;
  while (t--) {
    int n;
    std::string s;
    std::cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
      ans += (s[i] == '+' ? 1 : -1);
    }
    std::cout << ans << std::endl;
  }
}
