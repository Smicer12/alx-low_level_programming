#include "main.h"
void print_alphabet_x10(void)
{


	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int t = 0;

	while(t<=9)
	{
		while(  alp != '\0')
	 	{ _putchar(alp[i]);
		  i++;
		}

	  t++;
	}
	
	_putchar('\n');
	

}