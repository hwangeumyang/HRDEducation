// if test.c

#include <stdio.h>

int main(void)
{
	int n = 10;
	int input = 0;

	printf("input a number:");
	scanf("%d", &input);

	if(input>n)
		printf("input number %d is bigger than %d", input, n);
	else if(input<n)
		printf("input number %d is smaller than %d", input, n);
	else
		printf("input number %d is same with %d", input, n);
	
	return 0;
}
