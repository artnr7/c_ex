#include <math.h>
#include <stdio.h>

int main() {
  int n = 0;

  scanf("%d", &n);

  while (n != 0) {
    printf("%d", n % 10);
    n /= 10;
    if (n < 0) {
      n = -n;
    }
  }
  return 0;
}