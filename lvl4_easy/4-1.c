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

  if (scanf("%d", &n) && n >= 0) {
    for (int k = 0; k <= n; ++k) {
      printf("%d", (f(n) / (f(k) * f(n - k))));
      if (k < n) {
        printf(" ");
      }
    }

  } else {
    printf("n/a");
  }
  return 0;
}
// c = n! / k! (n - k)!
