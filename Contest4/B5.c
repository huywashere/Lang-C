#include <stdio.h>

// Hàm tính giai thừa bằng đệ quy
int factorial(int n) {
    if (n == 0) {
        return 1; // Điều kiện dừng cho n = 0
    } else {
        return n * factorial(n - 1); // Đệ quy
    }
}

int main() {
    int n;
    printf("Nhập số nguyên dương n (0 ≤ n ≤ 10): ");
    scanf("%d", &n);
    
    // Kiểm tra giới hạn của n
    if (n < 0 || n > 10) {
        printf("Giá trị n không hợp lệ. Vui lòng nhập lại.\n");
    } else {
        int result = factorial(n);
        printf("Kết quả của %d! là: %d\n", n, result);
    }

    return 0;
}
