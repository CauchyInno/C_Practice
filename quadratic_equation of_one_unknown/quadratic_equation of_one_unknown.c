#include "quadratic_equation of_one_unknown.h"
#include <stdio.h>
#include <math.h>

void SolvingEquation_withptr(long double * x1, long double * x2, long double a,long double b,long double c)
{
	long double discriminant = b * b - 4 * a * c;
	if (discriminant >= 0 && a > 0)
	{
		*x1 = (-b + sqrt(discriminant)) / (2*a);
		*x2 = (-b - sqrt(discriminant)) / (2*a);
	}
	else if (discriminant < 0)
		printf("无实数解");
	else if (a <= 0)
		printf("这并非一个一元二次方程");
	else
		printf("error occured");
}
		
		
	