#include <iostream>
using namespace std;
int f(int k) {
  if (k < 2) return 0;
  else return f(k-1)+f(k-2);
}
int main() {
  int a;
  cin >> a;
  cout << f(a);
  return 0;
}