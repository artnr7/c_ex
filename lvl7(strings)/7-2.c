#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int main() {
  char *a = calloc(N, sizeof(char));
  char *b = calloc(N, sizeof(char));

  fgets(a, N, stdin);

  a[strcspn(a, "\n")] = '\0';

  fgets(b, N, stdin);

  printf("%s\n", a);
  printf("%s", b);

  int len_a = strlen(a);

  if (a[len_a - 1] == '\n') {
    a[len_a - 1] = '\0';
    --len_a;
  }

  free(a);
  free(b);
  return 0;
}