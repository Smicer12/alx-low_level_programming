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

	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}