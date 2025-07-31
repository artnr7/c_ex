#include <stdio.h>
#include <string.h>
#define N 1024

int main() {
  char s[N] = {};

  fgets(s, 1000, stdin);

  s[strcspn(s, "\n")] = '\0';

  char res[N] = {};

  char *p2 = res;
  int f = 0;
  for (char *p1 = s; *p1 != '\0'; ++p1, ++p2) {
    *p2 = *p1;

    while (*p1 == ' ') {
      ++p1;
      f = 1;
    }

    if (f) {
      --p1;
      f = 0;
    }
  }

  int len = strlen(res);
  if (res[len - 1] == ' ') {
    res[len - 1] = '\0';
  }

  printf("%s", res);
  return 0;
}