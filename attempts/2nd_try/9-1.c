#include <stdio.h>
#include <string.h>
#define N 256

int main() {

  char f_name[N] = {};

  scanf("%255s", f_name);

  FILE *f = fopen(f_name, "r");

  if (!f) {
    printf("n/a\n\n\n\n");
  }

  char cont[N] = {};

  int flag = 1;
  while (fgets(cont, N, f) != NULL) {
    if (!flag) {
      printf("\n");
    }
    flag = 0;
    cont[strcspn(cont, "\n")] = '\0';

    char *el = cont;

    while (*el != ':') {
      printf("%c", *el++);
    }
    for (int i = 0; i < 3; ++i) {
      ++el;
    }

    printf(" +7(");

    for (int i = 0; i < 3; ++i) {
      printf("%c", *el++);
    }
    printf(")");

    while (*el != '\0') {
      printf("%c", *el++);
    }
  }

  return 0;
}
