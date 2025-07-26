#include <stdio.h>
#include <stdlib.h>

int main() {
  int s = 8, cnt = 0;

  int *v = calloc(s, sizeof(int));

  do {
    scanf("%d", &v[cnt]);
    if (cnt == s - 1) {
      v = realloc(v, s * 2);
      s *= 2;
    }
  } while (v[cnt++] != -1);

  --cnt;

  for (int i = 0; i < cnt / 2; ++i) {
    printf("%d %d", v[i], v[cnt - 1 - i]);
  }
  if (cnt % 2 != 0) {
    printf(" %d", v[cnt / 2]);
  }

  free(v);
  return 0;
}