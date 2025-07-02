#include <math.h>
#include <stdio.h>

// m = p * v

#define DENSITY 21500
int main() {
  double ball_rad = 0;
  if (scanf("%lf", &ball_rad)) {

    double ball_vol = (4.0 / 3.0) * M_PI * pow(ball_rad, 3);

    double result = round(DENSITY * ball_vol);

    printf("%.0lf", result);
  } else {
    printf("n/a");
  }

  return 0;
}
