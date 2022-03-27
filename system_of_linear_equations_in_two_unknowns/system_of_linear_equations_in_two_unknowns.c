#include "system_of_linear_equations_in_two_unknowns.h"

void SolvingEquations(long double * x,long double * y,long double a,long double b,long double c,long double d,long double e,long double f)
{
	long double delta = a * d -b *c;
	
	*x = (d*e-b*f)/delta;
	*y = (a*f-c*e)/delta;
}