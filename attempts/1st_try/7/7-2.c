#include <stdio.h>
#include <string.h>

#define N 1024

int main() {
  char s[N] = {};
  char subs[N] = {};

  fgets(s, N, stdin);
  fgets(subs, N, stdin);

  s[strcspn(s, "\n")] = '\0';
  subs[strcspn(subs, "\n")] = '\0';

  char *cur_oc = s;
  char *last_oc = NULL;

  while ((cur_oc = strstr(cur_oc, subs)) != NULL) {
    last_oc = cur_oc;
    cur_oc += strlen(subs);
  }

  if (last_oc) {
    memmove(last_oc, last_oc + strlen(subs), strlen(last_oc));
  }
  printf("%s", s);

  return 0;
}