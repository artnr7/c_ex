#include <stdio.h>
#include <stdlib.h>

int main() {

  int cnt = 0, s = 8, *v = calloc(s, sizeof(int));

  while (scanf("%d", &v[cnt]) && v[cnt++] != -1) {

    if (cnt == s - 1) {
      s *= 2;
      v = realloc(v, s);
    }
  }

  --cnt;

  for (int i = 0; i < cnt; ++i) {

    for (int j = i + 1; j < cnt; ++j) {
      if (v[j] == v[i]) {
        v[j] = -9;
      }
    }
  }

  for (int i = 0; i < cnt; ++i) {
    if (v[i] != -9) {
      printf("%d ", v[i]);
    }
  }

  free(v);

  return 0;
}