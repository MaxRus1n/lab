#include <stdio.h>

int main() {
    int n, m, count = 0;

    printf("Натуральне число n ");
    scanf("%d", &n);

    for (m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    printf("кількість його рівних дільників: %d\n", count);

    return 0;
}