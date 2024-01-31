#include <algorithm>
#include <cstdlib>
#include <iostream>

void tc(){
  int n, m;
  std::cin >> n >> m;
  int a[n];
  int b[m];
  for(int&i:a)std::cin>>i;
  for(int&i:b)std::cin>>i;
  std::sort(a,a+n);
  std::sort(b,b+m);
  int left = 0, right = m - 1;
  for(int i = 0; i < n; i++){
    int l = std::abs(b[left] - a[i]);
    int r = std::abs(b[right] - a[i]);
    if(l > r){
      sum += l;
      left++;
    }
    else if(r > l){
      sum += r;
      right--;
    }
    else{
      sum+=l;
      left++;
    }
  }
  std::cout<<sum<<'\n';
}

int main(){
  int t; std::cin >> t;
  while (t--) {
    tc();
  }
}
