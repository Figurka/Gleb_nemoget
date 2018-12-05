//funcs.cpp
#include "funcs.h"
double IMul (double a, double b)
{
	return a*b;
}
double IDiv (double a, double b)
{
	if (b==0){return 0;}
		else{return a/b;}
}

double Gsum(double a, double b)
{
return a + b;
}

double Gmin(double a, double b)
{
return a - b;
}


