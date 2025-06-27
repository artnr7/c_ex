#include <stdio.h>

int main() {

  int i = 0;
  int num = 0, res = 0;

  if (scanf("%d", &num)) {
    if (num < 0)
      num = -num;
    while (num != 0) {
      if ((num % 10) % 2 != 0) {
        if (!i++) {
          res = 1;
        }
        res *= num % 10;
      }
      num /= 10;
    }
    printf("%d", res);
  } else {
    printf("n/a");
  }
  return 0;
}