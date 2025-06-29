#include <stdio.h>
#include <stdlib.h>

int main() {
  int m = 0, n = 0;
  scanf("%d", &m);
  scanf("%d", &n);

  int **a = calloc(m, sizeof(int *));
  int **b = calloc(n, sizeof(int *));

  for (int i = 0; i < m; ++i) {
    a[i] = calloc(n, sizeof(int));
  }
  for (int i = 0; i < n; ++i) {
    b[i] = calloc(m, sizeof(int));
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &(a[i][j]));
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      b[i][j] = a[m - j - 1][i];
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      printf("%d", b[i][j]);
      if (j < m - 1) {
        printf(" ");
      }
    }
    if (i < n - 1) {
      printf("\n");
    }
  }

  for (int i = 0; i < m; ++i) {
    free(a[i]);
  }
  for (int i = 0; i < n; ++i) {
    free(b[i]);
  }

  free(a);
  free(b);
  return 0;
}
