//Simpson's 3/8 Rule
//Problem: Evaluate ∫₁⁴ ln(x) dx using n = 9 subintervals (n must be a multiple of 3).

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return log(x);
}

int main()
{
    float a, b, h, sum, x;
    int n;

    printf("Akhil Hamal\n");
    printf("Enter lower limit a: ");
    scanf("%f", &a);

    printf("Enter upper limit b: ");
    scanf("%f", &b);

    printf("Enter number of subintervals n (multiple of 3): ");
    scanf("%d", &n);

    if (n % 3 != 0)
    {
        printf("n must be a multiple of 3 for Simpson's 3/8 Rule.\n");
        return 1;
    }

    h = (b - a) / n;
    sum = f(a) + f(b);

    for (int i = 1; i < n; i++)
    {
        x = a + i * h;
        if (i % 3 == 0)
            sum += 2 * f(x);
        else
            sum += 3 * f(x);
    }

    float result = (3 * h / 8) * sum;

    printf("\nApproximate Integral = %.6f\n", result);

    return 0;
}
