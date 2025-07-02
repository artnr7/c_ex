#include <stdio.h>

int main() {
  int x = 0, y = 0, z = 0;
  if (scanf("%d%d%d", &x, &y, &z)) {
    if (x && (z || y)) {
      printf("1");
    } else {
      printf("0");
    }
  } else {
    printf("n/a");
  }

  return 0;
}