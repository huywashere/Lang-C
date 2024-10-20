#include <stdio.h>

int S(int n) {
    if (n == 1) {
        return 1;
    }
    return n * n + S(n - 1);
}

int main() {
    int n;
    printf(" ");
    scanf("%d", &n);
    if (n < 0) {
        printf("\n");
        return 1;
    }

    printf("%d\n", S(n));
    return 0;
}
