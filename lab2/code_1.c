#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = 0;
    long long op = 0;
    op++;

    for (int i = 1; i <= n; i++) {
        op++;
        op++;

        double sign = 1;
        op++;
        int p = i + 1;
        op += 2;

        for (int j = 0; j < p; j++) {
            op++;
            op++;
            sign = sign * (-1);
            op += 2;
            op++;
        }
        op++;

        double p1 = 0;
        op++;
        int lim1 = 2 * i - 1;
        op += 3;
        for (int k = 0; k < lim1; k++) {
            op++; op++;
            p1 = p1 + 1;
            op += 2; op++;
        }
        op++;

        double p2 = 0;
        op++;
        for (int k = 0; k < i; k++) {
            op++; op++;
            p2 = p2 + 1;
            op += 2; op++;
        }
        op++;

        double p3 = 0;
        op++;
        int lim3 = 2 * i + 1;
        op += 3;
        for (int k = 0; k < lim3; k++) {
            op++; op++;
            p3 = p3 + 1;
            op += 2; op++;
        }
        op++;

        double denom = p1 * p2 * p3;
        op += 2;

        double term = sign / denom;
        op += 2;

        sum = sum + term;
        op += 2;

        op++;
    }
    op++;

    printf("Result: %.7f\n", sum);
    printf("Operation count: %lld\n", op);

    return 0;
}