#include<iostream>

int main(){
  int t; std::cin >> t;
  while (t--) {
    int n;
    std::string s;
    std::cin >> n >> s;
    int plus = 0, minus = 0;
    for(int i = 0; i < s.length(); i++){
      if (s[i] == '+') plus++;
      else minus ++;
    }
    std::cout << abs(minus - plus) << std::endl;
  }
}
