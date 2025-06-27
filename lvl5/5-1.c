#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  if (scanf("%d", &n) && n > 0) {

    int *d1 = calloc(n, sizeof(int));
    int *d2 = calloc(n, sizeof(int));

    for (int i = 0; i < n; ++i) {
      scanf("%d", &(d1[i]));
    }
    for (int i = 0; i < n; ++i) {
      scanf("%d", &(d2[i]));
    }
    int res = 0;
    for (int i = 0; i < n; ++i) {
      res += d1[i] * d2[i];
    }
    printf("%d", res);
    free(d1);
    free(d2);
  } else {
    printf("n/a");
  }
}
// сложна