#include <stdio.h>

int countSequences(int n) {
    int countEndingZero = 1;
    int countEndingOne = 1;

    for (int i = 2; i <= n; i++) {
        int newCountEndingZero = (countEndingZero + countEndingOne) % 12345;
        int newCountEndingOne = countEndingZero % 12345;
        countEndingZero = newCountEndingZero;
        countEndingOne = newCountEndingOne;
    }

    return (countEndingZero + countEndingOne) % 12345;
}

int main() {
    int n;
    printf("Довжина послідовностей n ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("кількість шуканих послідовностей: %d\n", n, result);

    return 0;
}


