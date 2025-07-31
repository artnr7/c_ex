#include <stdio.h>

int e() {
  printf("n/a");
  return 0;
}

int f(int num) {
  int res = 1;

  if (num >= 2) {
    res = num;
  }

  for (int i = 2; i < num; ++i) {
    res *= i;
  }
  return res;
}

int main() {
  int n = 0;

  if (scanf("%d", &n) == 1) {
    char ch = getchar();
    if (ch == '\n' || ch == EOF) {
      for (int k = 0; k <= n; ++k) {
        printf("%d", f(n) / (f(k) * f(n - k)));
        if (k < n) {
          printf(" ");
        }
      }
    } else
      return e();
  } else
    return e();

  return 0;
}