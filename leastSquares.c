//Least Squares Method (Linear Fit)
//Problem: Given x = {1, 3, 5, 7, 6}, y = {3, 5, 6, 8, 9}, fit a line y = a + bx and estimate y at x = 3.5.

#include <stdio.h>

int main()
{
    int n, i;
    float x[20], y[20];
    float sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0, a, b, xx;

    printf("Akhil Hamal\n");
    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter x values:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &x[i]);

    printf("Enter y values:\n");
    for (i = 0; i < n; i++)
        scanf("%f", &y[i]);

    for (i = 0; i < n; i++)
    {
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumx2 += x[i] * x[i];
    }

    b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    a = (sumy / n) - b * (sumx / n);

    printf("\nThe Least Square line is y = %.4f + %.4f x\n", a, b);

    printf("Enter x value to estimate y: ");
    scanf("%f", &xx);

    printf("Y when x is %.4f is: %.4f\n", xx, a + b * xx);

    return 0;
}
