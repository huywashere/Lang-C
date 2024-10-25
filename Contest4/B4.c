#include <stdio.h>

// Hàm đệ quy tính tổng S(n)
int S(int n) {
    // Bài toán cơ sở
    if (n == 1) {
        return -1;
    }
    // Nếu n là số lẻ, trừ n
    if (n % 2 != 0) {
        return S(n - 1) - n;
    }
    // Nếu n là số chẵn, cộng n
    return S(n - 1) + n;
}

int main() {
    int n;

    // Nhập giá trị n từ người dùng
    scanf("%d", &n);

    // Kiểm tra giới hạn
    if (n < 1 || n > 1000) {
        printf("Vui long nhap n trong khoang 1 <= n <= 1000.\n");
        return 1; // Kết thúc chương trình nếu n không hợp lệ
    }

    // Tính và in ra S(n)
    printf("%d\n", S(n));

    return 0;
}
