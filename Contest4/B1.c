#include <stdio.h>
int S(int n) {
    if (n == 1){
        return 1;
    }
    return n + S(n - 1);

}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", S(n));
    return 0;

}