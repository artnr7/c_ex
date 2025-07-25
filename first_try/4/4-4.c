#include <stdio.h>

int main() {
  int n = 0, max = 0;
  scanf("%d", &n);

  while (n != 0) {

    max = n % 10 > max ? n % 10 : max;
    n /= 10;
  }
  printf("%d", max);

  return 0;
}