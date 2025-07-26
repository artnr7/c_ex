#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0;
  scanf("%d", &n);

  int **res = calloc(n, sizeof(int *));

  for (int i = 0; i < n; i++) {
    res[i] = calloc(n, sizeof(int));
  }

  int U = 0, R = n, D = n, L = 0;
  int c = 0;

  while (U < D && L < R) {

    for (int i = U; i < D; ++i) {
      res[i][L] = c++;
    }
    ++L;

    for (int j = L; j < R; ++j) {
      res[D - 1][j] = c++;
    }
    --D;

    if (L < R - 1) {

      for (int i = D - 1; i >= U; --i) {
        res[i][R - 1] = c++;
      }
      --R;
    }

    if (U < D - 1) {

      for (int j = R - 1; j >= L; --j) {
        res[U][j] = c++;
      }
      ++U;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d", res[i][j]);
      if (j < n - 1) {
        printf(" ");
      }
    }
    if (i < n - 1) {
      printf("\n");
    }
  }

  for (int i = 0; i < n; i++) {
    free(res[i]);
  }

  free(res);
  return 0;
}