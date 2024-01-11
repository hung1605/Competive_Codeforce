#include <iostream>
#include <ostream>

int main(){
  int t; std::cin >> t;
  while (t--) {
    int a, b;
    std::cin >> a >> b;
    std::cout << ((abs(a - b) % 2 == 0) ? "Bob" : "Alice") << std::endl;
  }
}
