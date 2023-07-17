#include <stdio.h>
#include <math.h>

int countPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (x1 == x2 && y1 == y2 && r1 == r2) {
        return -1;
    } else if (distance > r1 + r2) {
        return 0;
    } else if (distance == r1 + r2) {
        return 0;
    } else {
        int minRadius = (r1 < r2) ? r1 : r2;
        int maxRadius = (r1 > r2) ? r1 : r2;

        if (distance < maxRadius - minRadius) {
            return 0;
        } else if (distance == maxRadius - minRadius) {
            return 1;
        } else {
            return 2;
        }
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("coordinates and radius first circle (x1 y1 r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("coordinates and radius second circle (x2 y2 r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    int result = countPoints(x1, y1, r1, x2, y2, r2);
    printf("Number of points: %d\n", result);

    return 0;
}
