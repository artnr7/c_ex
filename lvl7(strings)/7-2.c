#include <stdio.h>
#include <string.h>

#define N 1000

int main() {
  char s[N] = {};
  char subs[N] = {};

  fgets(s, N, stdin);
  fgets(subs, N, stdin);

  s[strcspn(s, "\n")] = '\0';
  subs[strcspn(subs, "\n")] = '\0';

  char *last_occur = NULL;
  char *cur_occur = s;

  int len_subs = strlen(subs);

  while ((cur_occur = strstr(cur_occur, subs)) != NULL) {
    last_occur = cur_occur;
    cur_occur += len_subs;
  }

  if (last_occur != NULL) {
    memmove(last_occur, last_occur + len_subs,
            strlen(last_occur + len_subs) + 1);
  }

  printf("%s", s);

  return 0;
}
// не сложно, но нужна практика со string.h