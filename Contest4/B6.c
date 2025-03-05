#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}
int main() {
    int n;
    printf("Nhập số nguyên dương n (0 ≤ n ≤ 10): ");
    scanf("%d", &n);
    if (n < 0 || n > 10) {
        printf("Giá trị n không hợp lệ. Vui lòng nhập lại.\n");
    } else {
        int result = factorial(n);
        printf("Kết quả của %d! là: %d\n", n, result);
    }

    return 0;
}
