#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n;
    float sum = 0, prod, xx;

    printf("Enter the number of data points: ");

    scanf("%d", &n);
    float x[n], y[n];

    printf("Enter the x values:\n");
    for(i=0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    printf("Enter the y values:\n");
    for(i=0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }
    
    printf("Enter x for which y is to be found:");
    scanf("%f", &xx);


    for(i=0; i < n; i++)
    {
        prod = 1;
        for(j=0; j < n; j++)
        {
            if(i != j)
            {
                prod *= (xx - x[j]) / (x[i] - x[j]);
            }
        }
        sum += y[i] * prod;
    }

    printf("%f", sum);

   
}


