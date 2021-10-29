#include <stdio.h>
#include <unistd.h>

int main(void)
{

char name[] = "_putchar";
int i= 0;
while(name[i] !='\0')
{	putchar(name[i]);
	i++;
}

putchar('\n');

return(0);

}