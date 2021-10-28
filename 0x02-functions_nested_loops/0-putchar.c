#include "main.h"
#include "_putchar.c"


int main(void)
{

char name[] = "_putchar";
int i= 0;
while(name[i] !='\0')
{	_putchar(name[i]);
	i++;

}

putchar('\n');

return(0);

}