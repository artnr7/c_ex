#include <stdio.h>

int main() {
  int x = 0, y = 0, z = 0;

  scanf("%d %d %d", &x, &y, &z);

  printf("%d", x & (z || y));

  return 0;
}