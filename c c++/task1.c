#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time, time_together;

    scanf("%d %d %d", &t1, &t2, &t3);

    total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    time_together = 1.0 / total_time;

    printf("%.2lf\n", time_together);

    return 0;
}