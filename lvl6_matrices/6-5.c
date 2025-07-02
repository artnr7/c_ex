#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, m = 0;
  scanf("%d", &n);
  scanf("%d", &m);

  int **a = calloc(n, sizeof(int *));

  for (int i = 0; i < n; ++i) {
    a[i] = calloc(m, sizeof(int));
  }

  int u = 0, d = n, l = 0, r = m;

  int cnt = 0;

  while (u < d && l < r) {

    for (int i = u; i < d; ++i) {
      a[i][l] = cnt++;
    }
    ++l;

    for (int j = l; j < r; ++j) {
      a[d - 1][j] = cnt++;
    }
    --d;

    if (l < r - 1) {
      for (int i = d - 1; i > u - 1; --i) {
        a[i][r - 1] = cnt++;
      }
      --r;
    }
    if (u < d - 1) {
      for (int j = r - 1; j > l - 1; --j) {
        a[u][j] = cnt++;
      }
      u++;
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      printf("%d", a[i][j]);
      if (j < m - 1) {
        printf(" ");
      }
    }
    if (i < n - 1) {
      printf("\n");
    }
  }
  for (int i = 0; i < n; ++i) {
    free(a[i]);
  }

  free(a);
  return 0;
}