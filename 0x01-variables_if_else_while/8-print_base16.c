#include <stdio.h>
int main(void)
{
	int n,l;


	while(n<10)
	{ putchar(n+'0');
	n++;
	}
	
	for(l='a'; l<='f'; l++)
	{ putchar(l);
	}
	
	putchar('\n');

	return(0);


}