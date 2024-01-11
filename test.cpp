#include<iostream>
#include <queue>
#include <stack>
#include <vector>

int main(){
  std::stack<int> st;
  std::queue<int> q;
  std::vector<int> v; 
  int t; 
  std::cin >> t;
  while (t--) {
    int x; std::cin >> x;
    st.push(x);
  }
  while(st.size()){
    std::cout << st.top() << std::endl;
    st.pop();
  }
}


