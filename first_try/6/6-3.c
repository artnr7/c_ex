#include <stdio.h>
#include <stdlib.h>

int main() {
  int m = 0, n = 0;
  scanf("%d %d", &m, &n);

  int **v = calloc(m, sizeof(int *));
  int **res = calloc(n, sizeof(int *));

  for (int i = 0; i < m; ++i) {
    v[i] = calloc(n, sizeof(int));
  }

  for (int i = 0; i < n; ++i) {
    res[i] = calloc(m, sizeof(int));
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &v[i][j]);
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      res[i][j] = v[m - 1 - j][i];
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      printf("%d ", res[i][j]);
    }
  }

  for (int i = 0; i < m; ++i) {
    free(v[i]);
  }
  for (int i = 0; i < n; ++i) {
    free(res[i]);
  }

  free(v);
  free(res);
  return 0;
}