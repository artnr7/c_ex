#include <stdio.h>

int fact(int num) {
  int res = 1;
  if (num > 1) {
    res = num;
  }

  for (int i = 1; i < num; ++i) {
    res *= i;
  }
  return res;
}

int main() {
  int n = 0;

  if (scanf("%d", &n) && n >= 0) {
    for (int k = 0; k <= n; ++k) {
      printf("%d", (fact(n) / (fact(k) * fact(n - k))));
      if (k < n) {
        printf(" ");
      }
    }

  } else {
    printf("n/a");
  }
  return 0;
}