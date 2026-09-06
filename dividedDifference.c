//Newton's Divided Difference Interpolation
//Problem: Given unequally spaced data x = {0, 2, 3, 8}, y = {9, 8, 60, 446}, estimate y at x = 5.

#include <stdio.h>

int main()
{
    int n, i, j;
    float x[10], y[10][10];

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
            y[i][j] = (y[i + 1][j - 1] - y[i][j - 1]) / (x[i + j] - x[i]);

    float value, sum, term = 1;
    printf("Enter value of x to interpolate: ");
    scanf("%f", &value);

    sum = y[0][0];

    for (i = 1; i < n; i++)
    {
        term *= (value - x[i - 1]);
        sum += term * y[0][i];
    }

    printf("\nInterpolated value at x = %.2f is %.4f\n", value, sum);

    return 0;
}
