#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  double rad = 0.0;

  if (scanf("%lf", &rad) != 1) {
    printf("n/a");
    exit(1);
  }
  printf("%.0lf", round(57.29 * rad));

  return 0;
}