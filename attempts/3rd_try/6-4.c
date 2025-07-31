#include <stdio.h>
#include <stdlib.h>

int e() {
  printf("n/a");
  return 0;
}

int main() {
  int n = 0;
  if (scanf("%d", &n) == 1) {
    int **res = calloc(n, sizeof(int *));

    for (int i = 0; i < n; ++i) {
      res[i] = calloc(n, sizeof(int));
    }

    int U = 0, R = n, D = n, L = 0, cnt = 0;
    while (U < D && L < R) {
      for (int j = L; j < R; ++j) {
        res[U][j] = cnt++;
      }
      ++U;

      for (int i = U; i < D; ++i) {
        res[i][R - 1] = cnt++;
      }
      --R;

      if (U < D - 1) {
        for (int j = R - 1; j >= L; --j) {
          res[D - 1][j] = cnt++;
        }
        --D;
      }

      if (L < R - 1) {
        for (int i = D - 1; i >= U; --i) {
          res[i][L] = cnt++;
        }
        ++L;
      }
    }
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        printf("%d", res[i][j]);
        if (j < n) {
          printf(" ");
        }
      }
      if (i < n) {
        printf("\n");
      }
    }

    for (int i = 0; i < n; ++i) {
      free(res[i]);
    }

    free(res);
  } else
    return e();

  return 0;
}