// квадратные матрицы перемножить

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  scanf("%d", &n);

  int **a = calloc(n, sizeof(int *));
  int **b = calloc(n, sizeof(int *));
  int **c = calloc(n, sizeof(int *));
  for (int i = 0; i < n; ++i) {
    a[i] = calloc(n, sizeof(int));
    b[i] = calloc(n, sizeof(int));
    c[i] = calloc(n, sizeof(int));
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &(a[i][j]));
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &(b[i][j]));
    }
  }
  char ch = getchar();
  if (ch != '\n' && ch != EOF) {
    exit(1);
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {

      printf("%d", c[i][j]);
      if (j < n - 1) {
        printf(" ");
      }
    }

    if (i < n - 1) {
      printf("\n");
    }
  }

  for (int i = 0; i < n; ++i) {
    free(a[i]);
    free(b[i]);
    free(c[i]);
  }
  free(a);
  free(b);
  free(c);
  return 0;
}