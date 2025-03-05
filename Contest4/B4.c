#include <stdio.h>

int S(int n) {
    
    if (n == 1) {
        return -1;
    }

    if (n % 2 != 0) {
        return S(n - 1) - n;
    }

    return S(n - 1) + n;
}

int main() {
    int n;

    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("Vui long nhap n trong khoang 1 <= n <= 1000.\n");
        return 1; 
    }
    printf("%d\n", S(n));

    return 0;
}
