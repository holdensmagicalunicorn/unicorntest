#include <algorithm>

int main () {
  int a,b;
  std::min(a, b);
  a = std::min(a, b);
  std::max(a, b);
  std::min(a, b);
}
