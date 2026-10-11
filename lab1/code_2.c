#include <stdio.h>

int main(void) {
    double x, y;

    printf("Enter a number in range [0, 8] U [16, +inf) or (-inf, -1): ");
    scanf("%lf", &x);

    if ((x >= 0.0 && x <= 8.0) || (x >= 16.0) || (x < -1.0)) {

        if (x < -1.0) {
            y = 15.0 * x - 2.0;
        } 
        else {
            y = -3.0 * (x * x) / 5.0 + 9.0;
        }
        printf("y(x) = %.2lf\n", y);
        
    } 
    else {
        printf("Error: function is undefined for this value.\n");
    }

    return 0;
}
