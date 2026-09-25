// Euler's Method

#include<stdio.h>

float f(float x, float y)
{
	return -x/y;
}

int main()
{
    printf("Akhil Hamal\n");
	float x0 = 0, y0 = 2, xn = 0.3, m;
	int n = 3;
	float h = (xn - x0)/n;
	
	while(x0 < xn)
	{
		printf("y(%g) = %f\n", x0, y0);
		m = f(x0, y0);
		y0 += h * m;
		x0 += h;
	}
	printf("y(%g) = %f\n", x0, y0);
	
	return 0;
}