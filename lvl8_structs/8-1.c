#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[100];
  int grade;
} std;

int main() {
  int n = 0;
  scanf("%d", &n);
  //   char ch = 0;
  getchar();

  std stds[n];

  int mid_grade = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%s", stds[i].name);
    scanf("%d", &(stds[i].grade));
    mid_grade += stds[i].grade;
  }

  mid_grade /= n;

  int fst = 0;

  for (int i = 0; i < n; ++i) {
    if (stds[i].grade > mid_grade) {
      if (fst == 0) {
        printf("%s", (stds[i].name));
      } else {
        printf(", %s", (stds[i].name));
      }
    }
  }
}