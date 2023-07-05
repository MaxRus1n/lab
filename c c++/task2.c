#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int arr[], int n) {
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        result = (result * arr[i]) / gcd(result, arr[i]);
    }

    return result;
}

int main() {
    int n;
    printf("Введіть кількість чисел р: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Введіть %d натуральних чисел, розділених пробілом: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = lcm(numbers, n);
    printf("Найменше спільне кратне: %d\n", result);

    return 0;
}