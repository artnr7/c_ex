#include <stdio.h>
#include <string.h>

#define N 1000

int main() {

  char f_name[N] = {};

  scanf("%255s", f_name);

  
  FILE *file = fopen(f_name, 'r');

  if (!file) {
    printf("n/a");
  }

  char num[N] = {};
  while (fgets(num, N, fopen) != NULL) {
    num[strcspn(num, "\n")] = '\0';

    char *elptr = num;

    while (*elptr != ':') {
      printf("%c", *elptr++);
    }
    for (int i = 0; i < 3; ++i) {
      ++elptr;
    }
    printf(" +7(");

    for (int i = 0; i < 3; ++i) {
      printf("%c", *elptr++);
    }
    printf(")");
    ++elptr;
    while (*elptr != '\0') {
      printf("%c", *elptr++);
    }

    printf("\n");
  }

  return 0;
}