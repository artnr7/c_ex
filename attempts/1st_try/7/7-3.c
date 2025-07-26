#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define N 100

int main() {

  char s[N] = {};

  fgets(s, N, stdin);

  s[strcspn(s, "\n")] = '\0';

  int s_len = strlen(s);
  int res = 1;
  for (int i = 0; i <= s_len / 2; ++i) {

    if (tolower(s[i]) != tolower(s[s_len - 1 - i])) {
      res = 0;
    }
  }
  printf("%s", res == 1 ? "YES" : "NO");

  return 0;
}