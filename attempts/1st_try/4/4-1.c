#include <math.h>
#include <stdio.h>

int f(int num) {
  int res = num < 2 ? 1 : num;

  for (int i = 2; i < num; ++i) {
    res *= i;
  }

  return res;
}

int main() {
  int n = 0;

  scanf("%d", &n);

  for (int k = 0; k <= n; ++k) {
    printf("%d ", f(n) / (f(k) * f(n - k)));
  }

  return 0;
}
