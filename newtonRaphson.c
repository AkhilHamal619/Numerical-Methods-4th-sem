//Newton Raphson Method
//Solve x^3 - 30 = 0

#include<stdio.h>
#include<math.h>

float f(float x)
{
    return  (x*x*x)-30;
}
float df(float x)
{
    return 3 * (x*x);
}

int main()
{
    float E = 1e-20; //tolerable eror 
    float err;
    float x0, x1;
    int i=1, maxIter = 20; 
    x0 = 5;
    do
    {
        x1 = x0 - f(x0)/df(x0);
        printf("Iteration %d (x_%d)  = %f", i, i, x1);

        err = (x1-x0)/x1;
          printf("Error: %f", err);
          x0 = x1;
          i++;

    } while (fabs(err)> E && i < maxIter);
    printf("The required approximate root = %f.", x1);


    return 0;

}
