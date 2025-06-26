#include <stdio.h>

int main() {
    int n, max;
    do {
        scanf("%d", &n);
        if (n >= 0 && n > max) {
            max = n;
        }
    } while (n != -1);
    printf("%d", max);
    return 0;
}
