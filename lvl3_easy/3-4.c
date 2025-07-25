#include <stdio.h>

int main() {

  int a = 0, b = 0, c = 0;

  if (scanf("%d %d %d", &a, &b, &c)) {

    printf("%d", a < c && c < b);

  } else {
    printf("n/a");
  }

  return 0;
}