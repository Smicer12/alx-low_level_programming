#include "main.h"
void print_alphabet_x10(void)
{


	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int t = 0;

	while(t<=9)
	{
		i = 0;
		while(  alp[i] != '\0')
	 	{
		   _putchar( alp[i] );
		  i++;
		}

	  	t++;
		_putchar('\n');
	}
	

}