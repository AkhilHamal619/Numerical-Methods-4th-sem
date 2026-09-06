//Trapezoidal Rule
//Problem: Evaluate ∫₀¹ x² dx using n = 6 subintervals.

#include <stdio.h>

float f(float x)
{
    return x * x;
}

int main()
{
    float a, b, h, sum = 0, x;
    int n;

    printf("Akhil Hamal\n");
    printf("Enter lower limit a: ");
    scanf("%f", &a);

    printf("Enter upper limit b: ");
    scanf("%f", &b);

    printf("Enter number of subintervals n: ");
    scanf("%d", &n);

    h = (b - a) / n;
    sum = f(a) + f(b);

    for (int i = 1; i < n; i++)
    {
        x = a + i * h;
        sum += 2 * f(x);
    }

    float result = (h / 2) * sum;

    printf("\nApproximate Integral = %.6f\n", result);

    return 0;
}
