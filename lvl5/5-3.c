#include <stdio.h>
#include <stdlib.h>

int main() {
  size_t vec_size = 8;
  int *x = calloc(vec_size, sizeof(int));

  size_t i = 0;
  while (scanf("%d", &(x[i])) && x[i++] != -1) {
    if (i == vec_size - 1) {
      vec_size *= 2;
      x = realloc(x, vec_size);
    }
  }
  i -= 1;

  for (size_t j = 0; j < i / 2; ++j) {
    printf("%d %d", x[j], x[i - 1 - j]);
    if (j < (i / 2) - 1) {
      printf(" ");
    }
  }
  if (i % 2 != 0) {
    printf(" %d", x[i / 2]);
  }
  return 0;
}
// сложна
