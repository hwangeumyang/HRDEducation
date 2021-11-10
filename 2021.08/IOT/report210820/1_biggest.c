//biggest.c

#include <stdio.h>

int main(void)
{
	int n=0, m=0, k=0;
	int biggest=0;

	puts("input numbers: \"%d %d %d\"");
	scanf("%d %d %d", &n, &m, &k);

	biggest = n;
	if(biggest<m) biggest = m;
	if(biggest<k) biggest = k;

	printf("biggest : %d", biggest);

	return 0;
}
