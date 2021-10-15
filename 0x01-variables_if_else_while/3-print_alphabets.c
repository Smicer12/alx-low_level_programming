#include <stdio.h>
int main(void)
{
	
	char l,u;
	l='a';
	while(l<='z')
	{  putchar(l);
           l++;
	}


	
	for(u='A'; u<='Z'; u++)
	{
	putchar(u);
	}

	putchar('\n');
	
	return(0);
}