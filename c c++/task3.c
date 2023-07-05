#include <stdio.h>

int main() {
    int r;
    printf("Введіть кількість розрядів р: ");
    scanf("%d", &r);

    int dp1[r + 1], dp2[r + 1];
    dp1[1] = dp2[1] = 1;

    for (int i = 2; i <= r; i++) {
        dp1[i] = dp2[i - 1] + dp1[i - 1] - dp1[i - 2];
        dp2[i] = dp1[i - 1] + dp2[i - 1];
    }

    int total_numbers = dp1[r] + dp2[r];
    printf("Кількість чисел із %d розрядів: %d\n", r, total_numbers);

    return 0;
}