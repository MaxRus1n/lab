#include <stdio.h>
#include <math.h>

double calculateLength(int x1, int y1, int x2, int y2) {
    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return length;
}

int main() {
    int x1, y1, x2, y2;
    printf("Введіть координати початкової точки (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the end point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    double result = calculateLength(x1, y1, x2, y2);
    printf("Довжина вектора: %.6f\n", result);

    return 0;
}
