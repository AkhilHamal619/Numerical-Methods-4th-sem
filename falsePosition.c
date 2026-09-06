//Solve f(x) = 2 - log(x) = 0 (natural log; root is x = e² ≈ 7.389056

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return 2 - log(x);
}

int main()
{
    float a, b, c, E;
    int i = 1, N;

    printf("Akhil Hamal\n");
    printf("Enter the Tolerable Error: ");
    scanf("%f", &E);

    printf("Enter maximum iterations: ");
    scanf("%d", &N);

    while (1)
    {
        printf("Enter the lower limit of interval (a): ");
        scanf("%f", &a);

        printf("Enter the higher limit of interval (b): ");
        scanf("%f", &b);

        if (f(a) * f(b) < 0)
            break;

        printf("The root does not lie in this interval. Try again!\n\n");
    }

    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        printf("Iteration %d : c = %.6f, f(c) = %.6f\n", i, c, f(c));

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        i++;

    } while (fabs(f(c)) > E && i <= N);

    printf("\nApproximate Root = %.6f\n", c);

    return 0;
}