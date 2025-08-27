#include <stdio.h>
#include "func.h"

int init_test(int argc, char *argv[])
{
	printf("Tests starting...\n\n");
	return 0;
}

int test_add_nums(double (*f)(double x, double y), double x, double y, double exp)
{
	printf("Testing add_nums...\n");
	double result;
	int stat;
	if ((result = (*f)(x, y)) != exp)
	{
		printf("Failed --- Expected %lf | Got %lf\n", exp, result);
		stat = 1;
	}
	else
	{
		printf("Passed --- Returned %lf\n", exp);
		stat = 0;
	}
	printf("\n");
	return stat;
}

int test_sub_nums(double (*f)(double x, double y), double x, double y, double exp)
{
	printf("Testing sub_nums...\n");
	double result;
	int stat;
	if ((result = (*f)(x, y)) != exp)
	{
		printf("Failed --- Expected %lf | Got %lf\n", exp, result);
		stat = 1;
	}
	else
	{
		printf("Passed --- Returned %lf\n", exp);
		stat = 0;
	}
	printf("\n");
	return stat;
}