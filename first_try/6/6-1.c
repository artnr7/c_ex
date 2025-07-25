#include <stdio.h>
#include <stdlib.h>

int main() {

  int n = 0;
  scanf("%d", &n);
  int **v1 = calloc(n, sizeof(int *));
  int **v2 = calloc(n, sizeof(int *));
  int **res = calloc(n, sizeof(int *));

  for (int i = 0; i < n; ++i) {
    v1[i] = calloc(n, sizeof(int));
    v2[i] = calloc(n, sizeof(int));
    res[i] = calloc(n, sizeof(int));
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &v1[i][j]);
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &v2[i][j]);
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        res[i][j] += v1[i][k] * v2[k][j];
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%d ", res[i][j]);
    }
  }

  for (int i = 0; i < n; ++i) {
    free(v1[i]);
    free(v2[i]);
    free(res[i]);
  }
  free(v1);
  free(v2);
  free(res);
  return 0;
}