#include <stdio.h>
#include <limits.h>

int minSteps(int x, int y) {
    int dp[y + 1];

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= y; i++) {
        dp[i] = INT_MAX;

        for (int j = 1; j < i; j++) {
            if (i == j + dp[j] || i == j + dp[j] + 1 || i == j + dp[j] - 1) {
                dp[i] = (dp[i] < dp[j] + 1) ? dp[i] : dp[j] + 1;
            }
        }
    }

    return dp[y];
}

int main() {
    int x, y;
    printf("Enter the starting point x: ");
    scanf("%d", &x);
    printf("Enter the target point y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);
    printf("Minimum number of steps: %d\n", result);

    return 0;
}
