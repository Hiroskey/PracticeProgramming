#include <iostream>
 
int main() {
  int n;
  std::cin >> n;
  int res = 0, ma = 0;
  for (int i = 0; i < n; ++i) {
    int p;
    std::cin >> p;
    res += p;
    ma = std::max(ma, p);
  }
  res -= ma / 2;
  std::cout << res << std::endl;
  return 0;
}