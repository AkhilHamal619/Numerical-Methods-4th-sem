// false point method
// solve 2-log(x) using false point method . E = 1e-5

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return 2 - log(x);
}

int main()
{
    float a, b, c, E;
    int i = 1;

    printf("Enter the Tolerable Error: ");
    scanf("%f", &E);

    // Get valid interval
    while (1)
    {
        printf("Enter the lower limit of interval (a): ");
        scanf("%f", &a);

        printf("Enter the higher limit of interval (b): ");
        scanf("%f", &b);

        if (f(a) * f(b) < 0)
            break;

        printf("The root does not lie in this interval.\n");
        printf("Please try again!\n\n");
    }

    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        printf("Iteration %d : %.6f\n", i, c);

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        i++;

    } while (fabs(f(c)) > E);

    printf("\nApproximate Root = %.6f\n", c);

    return 0;
}