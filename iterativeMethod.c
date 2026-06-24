//Find a real root  of cosx = 3x-1 correct to the three decimal places using iterative method

#include<stdio.h>
#include<math.h>

float g(float x)
{
    return (cos(x) +  1/3);
}

int main()
{
    float x0, x1, err, E = 1e-5;
    int i = 1;
    x0 = 0;
    do{
        x1 = g(x0);
        printf("Iteration %d: x_%d=%f\n", i, i, x1);
        err = (x1-x0)/x1;
        x0 = x1;
        i++;
    }

    while(fabs(err) > E);
    return 0;
}