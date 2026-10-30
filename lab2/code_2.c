#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = 0;
    long long op = 0;
    op++;

    double sign = -1;
    op++;

    for (int i = 1; i <= n; i++) {
        op++;
        op++;

        sign = -sign;
        op++;

        double denom = (2 * i - 1) * i * (2 * i + 1);
        op += 6;

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