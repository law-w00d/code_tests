#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

int main(int argc, char *argv[])
{
	if (init_test(argc, argv) != 0)
	{
		printf("Error, stopping program\n");
		exit(1);
	}

	test_add_nums(add_nums, 1, 2, 3);
	test_add_nums(add_nums, 1, 2, 4);
	test_add_nums(bad_add, 1, 2, 3);
	test_sub_nums(sub_nums, 5, 3, 2);
	test_sub_nums(sub_nums, 5, 3, 4);
	test_sub_nums(bad_sub, 5, 3, 2);

    exit(0);
}