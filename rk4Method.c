// RK4 Method

#include<stdio.h>

float f(float x, float y)
{
	return x*x + y*y;
}

int main()
{
    printf("Akhil Hamal\n");
	float x0 = 0, y0 = 0, xn = 0.2, m1, m2, m3, m4;
	int n = 1;
	float h = (xn - x0)/n;
	
	while(x0 < xn)
	{
		printf("y(%g) = %f\n", x0, y0);
		m1 = f(x0, y0);
		m2 = f(x0 + h/2, y0 + h/2 * m1);
		m3 = f(x0 + h/2, y0 + h/2 * m2);
		m4 = f(x0 + h, y0 + h * m3);
		y0 += h/6 * (m1 + 2*m2 + 2*m3 + m4 );
		x0 += h;
	}
	printf("y(%g) = %f\n", x0, y0);
	
	return 0;
}