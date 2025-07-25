#include <stdio.h>
#include <stdlib.h>
#define N 128

typedef struct {
  char *name;
  int scr;
} Student;

int main() {

  int n = 0;

  scanf("%d", &n);

  Student *stds = malloc(n * sizeof(Student));

  int sred = 0;
  for (int i = 0; i < n; ++i) {
    stds[i].name = calloc(N, sizeof(char));
    stds[i].scr = 0;

    scanf("%s", stds[i].name);
    scanf("%d", &stds[i].scr);
    sred += stds[i].scr;
  }
  sred /= n;

  int flag = 0;
  for (int i = 0; i < n; ++i) {
    if (stds[i].scr > sred) {
      if (!flag++) {
        printf("%s", stds[i].name);
      } else {
        printf(", %s", stds[i].name);
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    free(stds[i].name);
  }
  free(stds);

  return 0;
}