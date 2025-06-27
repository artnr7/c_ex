#include <stdio.h>
#include <stdlib.h>

int main() {
  size_t vec_size = 8;
  int ind = 0, *x = calloc(8, sizeof(int));

  while (scanf("%d", &(x[ind])) && x[ind++] != -1) {
    if (ind == (int)vec_size - 1) {
      vec_size *= 2;
      x = realloc(x, vec_size);
    }
  }

  ind -= 1;

  for (int j = ind - 1; j >= 0; --j) {
    printf("%d", x[j]);
    if (j > 0) {
      printf(" ");
    }
  }

  return 0;
}