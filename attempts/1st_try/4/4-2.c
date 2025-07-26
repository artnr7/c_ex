#include <stdio.h>

int main() {

  int num = 0, max = 0;

  while (num != -1) {
    scanf("%d", &num);

    max = num > max ? num : max;
  }

  printf("%d", max);
  return 0;
}