#include <stdio.h>

// Hàm đệ quy tính tổng S(n) = 1^3 + 2^3 + ... + n^3
unsigned long long S(int n) {
    // Bài toán cơ sở
    if (n == 1) {
        return 1;
    }
    // Công thức truy hồi
    return (unsigned long long)n * n * n + S(n - 1);
}

int main() {
    int n;

    // Nhập giá trị n từ người dùng
    scanf("%d", &n);

    // Kiểm tra giới hạn
    if (n < 0 || n > 1000) {
        printf("Vui long nhap n trong khoang 0 <= n <= 1000.\n");
        return 1; // Kết thúc chương trình nếu n không hợp lệ
    }

    // Tính và in ra S(n)
    printf("%llu\n", S(n));

    return 0;
}
