#include <stdio.h>

int mul(int a, int b)
{	/* declaring function */	
	
	int result = a *b;
	printf("%d", result);
	return result;
}

int main(void)
{	/**
	*calling function inside main function
	*/

	x=mul(98, 1024);
	y=mul(-402, 4096);

	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}