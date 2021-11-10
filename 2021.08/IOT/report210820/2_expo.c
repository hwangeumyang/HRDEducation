#include <stdio.h>

int main(void)
{
	int exponent;
	int output=1;

	printf("input exponent : 2^n\n");

	scanf("%d", &exponent);

	for(int i=0; i<exponent; ++i) output *= 2;
	printf("output : %d\n", output);	

	return 0;
}	
