/*
 * проверка слова на полиндром (стр должна заканчив \n)
 * входная строка может содержать буквы латинского алфавита и цифры, длина
строки до 100 символов ввод        	| вывод
------------------------
Mam mam         | YES
------------------------
Test1       	| NO
 * */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define N 102
int main() {
  char s[N] = {};
  fgets(s, N, stdin);

  int len_s = strlen(s), r = len_s - 1, pol = 1;

  if (s[r] == '\n') {
    --r;
  }

  len_s /= 2;
  // центральный элемент всегда зеркален
  for (int i = 0; i < len_s; ++i) {
    if (tolower(s[i]) != tolower(s[r - i])) {
      pol = 0;
    }
  }

  printf("%s", pol == 1 ? "YES" : "NO");

  return 0;
}