#include <stdio.h>                                                                                                                            
#include <unistd.h>


void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while(letters[i] !='\0')
		{ 
	 	  putchar(letters[i]);
	 	  i++;
		}
	
	putchar('\n');
}