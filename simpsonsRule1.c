//Simpson's 1/3 Rule
//Problem: Evaluate ∫₁⁴ ln(x) dx using n = 4 subintervals (n must be even).

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return log(x);
}

int main()
{
    float a, b, h, oddSum = 0, evenSum = 0, x;
    int n;

    printf("Akhil Hamal\n");
    printf("Enter lower limit a: ");
    scanf("%f", &a);

    printf("Enter upper limit b: ");
    scanf("%f", &b);

    printf("Enter number of subintervals n (even): ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("n must be even for Simpson's 1/3 Rule.\n");
        return 1;
    }

    h = (b - a) / n;

    for (int i = 1; i < n; i++)
    {
        x = a + i * h;
        if (i % 2 == 0)
            evenSum += f(x);
        else
            oddSum += f(x);
    }

    float result = (h / 3) * (f(a) + f(b) + 4 * oddSum + 2 * evenSum);

    printf("\nApproximate Integral = %.6f\n", result);

    return 0;
}
