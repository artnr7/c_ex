#include <stdio.h>

int main() {
  int max = 0, num = 0;

  while (num != -1) {
    scanf("%d", &num);
    if (num > max) {
      max = num;
    }
  }
  printf("%d", max);
  return 0;
}