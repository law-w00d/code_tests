#include <stdio.h>
#include "func.h"

int init_test(int argc, char *argv[])
{
	printf("Tests starting...\n\n");
	return 0;
}

int test_add_nums(double (*f)(double x, double y), double x, double y, double exp)
{
	clock_t clock_start, clock_end;
	clock_start = clock();
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
	clock_end = clock();
	printf("Execution time: %9.2f ms\n\n", (double) (clock_end - clock_start) / (CLOCKS_PER_SEC / 1000));
	return stat;
}

int test_sub_nums(double (*f)(double x, double y), double x, double y, double exp)
{
	clock_t clock_start, clock_end;
	clock_start = clock();
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
	clock_end = clock();
	printf("Execution time: %9.2f ms\n\n", (double) (clock_end - clock_start) / (CLOCKS_PER_SEC / 1000));
	return stat;
}