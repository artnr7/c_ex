#include <stdio.h>

int main() {

  int a = 0, b = 0, c = 0;

  if (scanf("%d%d%d", &a, &b, &c)) {

    if (a < c && c < b) {
      printf("1");
    } else {
      printf("0");
    }

  } else {
    printf("n/a");
  }

  return 0;
}