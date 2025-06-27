#include <stdio.h>

int main() {
  int num = 0, max = 0;
  if (scanf("%d", &num)) {

    while (num != 0) {
      if (num % 10 > max) {
        max = num % 10;
      }
      num /= 10;
    }
    printf("%d", max);
  } else {
    printf("n/a");
  }
  return 0;
}