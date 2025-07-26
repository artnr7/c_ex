#include <stdio.h>
#include <stdlib.h>

int main() {

  int s = 8, *v = calloc(s, sizeof(int)), cnt = 0;

  while (scanf("%d", &v[cnt]) && v[cnt++] != -1) {
    if (cnt == s - 1) {

      s *= 2;
      v = realloc(v, s);
    }
  }

  --cnt;

  for (int i = cnt - 1; i > -1; --i) {
    printf("%d ", v[i]);
  }

  free(v);
  return 0;
}