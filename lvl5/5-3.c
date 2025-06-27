#include <stdio.h>
#include <stdlib.h>

int main() {
  size_t vec_size = 8;
  int *x = calloc(vec_size, sizeof(int));

  int i = 0;
  int num = 0;
  while (num != -1) {
    scanf("%d", num);
    if (num >= 0) {
      x[i++] = num;
    }
    if (i == vec_size - 1) {
      vec_size *= 2;
      realloc(x, vec_size);
    }
  }

  for (int j = 0; j < i - 1; ++j) {
    printf("%d %d ", x[j], x[i - 2 - j]);
  }
  return 0;
}