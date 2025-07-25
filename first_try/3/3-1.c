#include <math.h>
#include <stdio.h>

int main() {
  double res = 0;

  double rad = 0.0;

  scanf("%lf", &rad);

  res = round(21500 * ((4.0 / 3.0) * M_PI * pow(rad, 3)));

  printf("%.0lf", res);

  return 0;
}

// p = m / v
// m = pv