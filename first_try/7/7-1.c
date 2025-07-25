#include <stdio.h>
#include <string.h>
#define N 1024

int main() {
  char str[N] = {};
  char res[N] = {};

  fgets(str, N, stdin);

  str[strcspn(str, "\n")] = '\0';

  char *el = str;

  int i = 0, flag = 0;
  while (*el != '\0') {
    res[i++] = *el;

    while (*el == ' ') {
      ++el;
      flag = 1;
    }
    if (flag == 1) {
      --el;
      flag = 0;
    }

    ++el;
  }

  int len = strlen(res);

  if (res[len - 1] == ' ') {
    res[len - 1] = '\0';
  }
  printf("%s", res);

  return 0;
}