#include <stdio.h>
int main(void)
{
	int n, t;


	for(n=0; n<=9; n++)
	{
		for(t=0; t<=9; t++)
	  	{
	  		if(n!=t && n<t)
			{

				putchar( n +'0');
				putchar( t +'0');
				putchar(',');
				putchar(' ');
			}
           
		}
	}

	putchar('\n');
	return(0);
}
