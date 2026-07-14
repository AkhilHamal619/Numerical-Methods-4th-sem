//Newton Divided Difference Method

#include<stdio.h>

int main()
{
    float x[] = {1, 2, 3, 4, 5};
    float y[] = {2, 5, 10, 17, 26};
    int i, j, n = 5;

    float sum = y[0], prod = 1;

    for(i = 1; i<n; i++)
    {
        for(j = 0; j<n-1 ; j++)
        {
            y[j] = (y[j+1] - y[j])/(x[j+1]-x[j]);
            printf("%g", y[j]);
        }
        printf(" ");

    }

    return 0;
}