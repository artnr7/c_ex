#include <stdio.h>
#include <string.h>

#define N 100

int main() {
  char f_name[N] = {};
  scanf("%s", f_name);
  FILE *f = fopen(f_name, "r");
  char cont[N] = {};

  while (fgets(cont, N, f) != NULL) {
    char *pt = cont;

    cont[strcspn(cont, "\n")] = '\0';

    while (*pt != ':') {

      printf("%c", *pt++);
    }
    for (int i = 0; i < 3; ++i) {
      ++pt;
    }

    printf(" +7(");

    for (int i = 0; i < 3; ++i) {
      printf("%c", *pt++);
    }
    printf(")");
    ++pt;

    while (*pt != '\0') {
      printf("%c", *pt++);
    }
    printf("\n");
  }

  return 0;
}