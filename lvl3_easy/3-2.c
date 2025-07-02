#include <math.h>
#include <stdio.h>

#define DEGREE_IN_RAD 57.29

int main() {

  double rad = 0;
  if (scanf("%lf", &rad)) {

    double res = round(DEGREE_IN_RAD * rad);
    printf("%.0lf", res);
  } else {
    printf("n\a");
  }

  return 0;
}