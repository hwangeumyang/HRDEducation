//for_test.c

#include <stdio.h>

int main(void)
{
	int n = 0;
	int input = 0;

	for(int i=0; i<3; ++i) 
	{
		printf("input number:");
		scanf("%d", &input);

		n += input;
	}

	printf("sum=%d\n", n);

	return 0;
}

