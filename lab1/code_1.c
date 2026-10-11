#include <stdio.h>

int main() {
    double x, d_1, d_2;

    while (1) {
        printf("Enter a number in range [0, 8] U [16, +inf) or (-inf, -1): ");
        
        if (scanf("%lf", &x) != 1) {
            printf("Invalid input, try again\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (x >= 16){
            d_1 = (-3.0 * (x * x)) / 5.0 + 9.0;
            printf("f1(x) = %.2lf\n", d_1);
            break;
        } 
        else if (x >= 0) {
            if (x <= 8) {
                d_1 = (-3.0 * (x * x)) / 5.0 + 9.0;
                printf("f1(x) = %.2lf\n", d_1);
                break;
            } else {
                printf("Invalid input\n");
                break;
            }
        } 
        else if (x < -1) {
            d_2 = (15.0 * x) - 2.0;
            printf("f2(x) = %.2lf\n", d_2);
            break;
        } 
        else {
            printf("Invalid input\n");
            break;
        }
    }

    return 0;
}
