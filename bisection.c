//Bisection method using C language
#include<stdio.h>
#include<math.h>

float f(float x)
{
    return x*x-10;
}

int main()
{
    float a, b, E;
    float m;
    int i =1, maxIter=20;
    while(1)
    {
        printf("Enter the value of a:");
        scanf("%f", &a);
        printf("Enter the value of b:");
        scanf("%f", &b);

        if(f(a) * f(b) > 0)
            printf("The root doesn't lie within the interval.\n");
        else    
            break;
        
    }

    printf("Enter the tolerable Error:");
    scanf("%f", &E);

    while(fabs(b-a) / 2 >= E && i<=maxIter)
    {
        m = (a+b)/2;
        printf("Iteration %d: %f\n", i,m);
        if(f(a) * f(m) < 0)
        {
            b=m;
        }
        else
        {
            a = m;
             i++;
        }
       
    }
    printf("The approximate root is:%f\n",m);
    return 0;
}