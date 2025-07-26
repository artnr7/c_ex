#include <stdio.h>
#include <string.h>
#define N 1024

int main() {
  char s[N] = {};
  char res[N] = {};

  fgets(s, N, stdin);

  s[strcspn(s, "\n")] = '\0';

  int flag = 0;
  char *b = res;
  for (char *a = s; *a != '\0'; ++a, ++b) {
    *b = *a;
    while (*a == ' ') {
      ++a;
      flag = 1;
    }
    if (flag) {
      --a;
      flag = 0;
    }
  }

  if (res[strlen(res) - 1] == ' ') {
    res[strlen(res) - 1] = '\0';
  }

  printf("%s", res);

  return 0;
}