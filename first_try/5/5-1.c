#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 1;

  scanf("%d", &n);

  int *v1 = calloc(n, sizeof(int));
  int *v2 = calloc(n, sizeof(int));

  for (int i = 0; i < n; ++i) {
    scanf("%d", &v1[i]);
  }
  for (int i = 0; i < n; ++i) {
    scanf("%d", &v2[i]);
  }
  int res = 0;

  for (int i = 0; i < n; ++i) {

    res += v1[i] * v2[i];
  }

  printf("%d", res);

  free(v1);
  free(v2);
  return 0;
}