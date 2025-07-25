#include <stdio.h>

int main() {
  int n = 0, max = 0;
  if (scanf("%d", &n)) {

    while (n != 0) {
      max = n % 10 > max ? n % 10 : max;
      n /= 10;
    }
    printf("%d", max);
  } else {
    printf("n/a");
  }
  return 0;
}