#include <stdio.h>

int main() {

  int num = 0;
  scanf("%d", &num);

  while (num != 0) {
    printf("%d", num % 10);
    num /= 10;
    if (num < 0) {
      num = -num;
    }
  }

  return 0;
}