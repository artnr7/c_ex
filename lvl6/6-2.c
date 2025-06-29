#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int ind;
  int num;
} mn;

typedef struct {
  int ind;
  int num;
} mx;

int main() {
  int m = 0, n = 0;
  scanf("%d", &m);
  scanf("%d", &n);

  int **a = calloc(m, sizeof(int *));
  int **b = calloc(m, sizeof(int *));

  for (int i = 0; i < m; ++i) {
    a[i] = calloc(n, sizeof(int));
    b[i] = calloc(n, sizeof(int));
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &(a[i][j]));
    }
  }

  mn min = {.ind = 0, .num = a[0][0]};
  mx max = {.ind = 0, .num = a[0][0]};

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      b[i][j] = a[i][j];
      if (a[i][j] < min.num) {
        min.num = a[i][j];
        min.ind = i;
      }
      if (a[i][j] > max.num) {
        max.num = a[i][j];
        max.ind = i;
      }
    }
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == min.ind) {
        b[max.ind][j] = a[i][j];
      }
      if (i == max.ind) {
        b[min.ind][j] = a[i][j];
      }
    }
  }

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%d", b[i][j]);
      if (j < n - 1) {
        printf(" ");
      }
    }
    if (i < m - 1) {
      printf("\n");
    }
  }

  for (int i = 0; i < m; ++i) {
    free(a[i]);
    free(b[i]);
  }
  free(a);
  free(b);

  return 0;
}