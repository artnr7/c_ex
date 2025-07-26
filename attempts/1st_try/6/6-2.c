#include <stdio.h>
#include <stdlib.h>

int main() {
  int m = 0, n = 0;
  scanf("%d %d", &m, &n);

  int **v = calloc(m, sizeof(int *));
  int **res = calloc(m, sizeof(int *));

  for (int i = 0; i < m; ++i) {
    v[i] = calloc(n, sizeof(int));
    res[i] = calloc(n, sizeof(int));
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &v[i][j]);
    }
  }

  int min = v[0][0], max = v[0][0];
  int min_i = 0, max_i = 0;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (v[i][j] < min) {
        min = v[i][j];
        min_i = i;
      }
      if (v[i][j] > max) {
        max = v[i][j];
        max_i = i;
      }
    }
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      res[i][j] = v[i][j];
    }
  }

  for (int i = 0; i < n; ++i) {
    res[min_i][i] = v[max_i][i];
    res[max_i][i] = v[min_i][i];
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%d ", res[i][j]);
    }
  }

  for (int i = 0; i < m; ++i) {
    free(v[i]);
    free(res[i]);
  }

  free(v);
  free(res);
  return 0;
}