//Newton's Forward Difference Interpolation
//Given x = {1, 3, 5, 7}, y = {-5, -13, 11, 15} (equal spacing, h=2), estimate y at x = 2.

#include <stdio.h>

int main()
{
    int n, i, j;
    float x[10], y[10][10], p, sum, fact = 1, term = 1;

    printf("Akhil Hamal\n");
    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x values:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &x[i]);

    printf("Enter y values:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &y[i][0]);

    for (j = 1; j < n; j++)
        for (i = 0; i < n - j; i++)
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];

    float value, h = x[1] - x[0];
    printf("Enter value of x to interpolate: ");
    scanf("%f", &value);

    p = (value - x[0]) / h;
    sum = y[0][0];

    for (i = 1; i < n; i++)
    {
        term *= (p - (i - 1));
        fact *= i;
        sum += (term * y[0][i]) / fact;
    }

    printf("\nInterpolated value at x = %.2f is %.4f\n", value, sum);

    return 0;
}