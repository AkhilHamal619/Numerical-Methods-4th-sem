/*
Solve x^2 - 10 = 0 using fixed point method.
The given equation can be written as x = 10/x
or, x + x = x + 10/x which gives x = 1/2(x + 10/x)
so, g(x)  = 1/2*(x + 10/x)
*/

#include<stdio.h>
#include<math.h>

float g(float x)
{
    return (x + 10/x)/2;
}

int main()
{
    float x0, x1, err, E=1e-5;
    int i = 1;
    x0 = 3;
    do{
        x1 = g(x0);
        printf("Iteration %d: x_%d = %f\n", i, i, x1);
        err = (x1 - x0)/x1;
        x0 = x1;
        i++;
    }

    while(fabs(err) > E);
    return 0;

}