#include <stdio.h>

int main(void)
{
	int a= 1;
	printf("a=%d\n", a);
	a = a<<1;
	printf("a=%d\n", a);

	for(int i=0; i<3; ++i) 
	{
	a <<= 1;
	printf("a=%d\n", a);
	}

	return 0;
} 

