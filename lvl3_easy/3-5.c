#include <stdio.h>

int main() {
  int x = 0, y = 0, z = 0;
  if (scanf("%d%d%d", &x, &y, &z)) {
    printf("%d", x & (z || y));
  } else {
    printf("n/a");
  }

  return 0;
}