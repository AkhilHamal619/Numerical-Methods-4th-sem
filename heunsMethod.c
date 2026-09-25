// Heun's Method

#include<stdio.h>

float f(float x, float y)
{
	return -x/y;
}

int main()
{
    printf("Akhil Hamal\n");
	float x0 = 0, y0 = 2, xn = 0.3, m1, m2;
	int n = 3;
	float h = (xn - x0)/n;
	
	while(x0 < xn)
	{
		printf("y(%g) = %f\n", x0, y0);
		m1 = f(x0, y0);
		m2 = f(x0 + h, y0 + h * m1);
		y0 += h/2 * (m1 + m2);
		x0 += h;
	}
	printf("y(%g) = %f\n", x0, y0);
	
	return 0;
}