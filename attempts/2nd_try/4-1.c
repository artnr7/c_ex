#include <stdio.h>

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

  scanf("%d", &n);

  char er = getchar();

  if (er != '\n' && er != EOF) {
    printf("n/a");
    
  } else {

    for (int k = 0; k <= n; ++k) {

      printf("%d", f(n) / (f(k) * f(n - k)));
      if (k < n) {
        printf(" ");
      }
    }
  }
  return 0;
}