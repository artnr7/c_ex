#include <stdio.h>

int main() {
  int n = 0, flag = 0, res = 0;
  scanf("%d", &n);
  n = n < 0 ? -n : n;

  while (n != 0) {
    if (n % 10 % 2 != 0) {
      res = (!flag ? !flag++ : res) * n % 10;
    }
    n /= 10;
  }
  printf("%d", res);
  return 0;
}