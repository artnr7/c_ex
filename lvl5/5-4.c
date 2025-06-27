#include <stdio.h>
#include <stdlib.h>

int main() {

  size_t i = 0, vec_size = 8;
  int *x = calloc(vec_size, sizeof(int));
  while (scanf("%d", &(x[i])) && x[i++] != -1) {
    if (i == vec_size - 1) {
      vec_size *= 2;
      x = realloc(x, vec_size);
    }
  }
  i -= 1;
  for (size_t j = 0; j < i; ++j) {
    for (size_t k = j + 1; k < i; ++k) {
      if (x[j] == x[k]) {
        x[k] = -5;
      }
    }
  }
  for (size_t j = 0; j < i; ++j) {
    if (x[j] >= 0) {
      printf("%d", x[j]);
      if (j < i - 1) {
        printf(" ");
      }
    }
  }
  return 0;
}