#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int main() {

  char *a = calloc(N, sizeof(char));
  char *b = calloc(N, sizeof(char));

  fgets(a, N, stdin);

  a[strcspn(a, "\n")] = '\0';

  int st = 0;
  char *ptr_b = b;
  for (char *ptr_a = a; *ptr_a != '\0'; ++ptr_a, ++ptr_b) {
    *ptr_b = *ptr_a;
    while (*ptr_a == ' ') {
      ++ptr_a;
      st = 1;
    }
    if (st == 1) {
      --ptr_a;
      st = 0;
    }
  }

  int len_b = strlen(b);

  if (b[len_b - 1] == ' ') {
    b[len_b - 1] = '\0';
  } else {
    b[len_b] = '\0';
  }

  printf("%s", b);

  free(a);
  free(b);

  return 0;
}